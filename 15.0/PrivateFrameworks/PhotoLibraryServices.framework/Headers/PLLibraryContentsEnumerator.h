// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLIBRARYCONTENTSENUMERATOR_H
#define PLLIBRARYCONTENTSENUMERATOR_H

@class NSMutableArray, NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface PLLibraryContentsEnumerator : NSObject {
    NSMutableArray *_assetHandlerBlocks;
    NSMutableArray *_resourceHandlerBlocks;
    NSMutableArray *_conversationHandlerBlocks;
    NSMutableArray *_faceHandlerBlocks;
    NSMutableArray *_endOfListHandlerBlocks;
}


@property (readonly, nonatomic) BOOL concurrent; // ivar: _concurrent
@property (readonly, nonatomic) NSManagedObjectContext *sourceContext; // ivar: _sourceContext


-(BOOL)processObjectsWithError:(*id)arg0 ;
-(id)_setupAssetResourceFaceController;
-(id)_setupConversationController;
-(id)initWithSourceManagedObjectContext:(id)arg0 concurrent:(BOOL)arg1 ;
-(void)addAssetVisitor:(id)arg0 ;
-(void)addConversationVisitor:(id)arg0 ;
-(void)addEndOfListVisitor:(id)arg0 ;
-(void)addFaceVisitor:(id)arg0 ;
-(void)addResourceVisitor:(id)arg0 ;


@end


#endif