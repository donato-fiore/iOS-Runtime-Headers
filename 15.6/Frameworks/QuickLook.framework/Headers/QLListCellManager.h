// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLLISTCELLMANAGER_H
#define QLLISTCELLMANAGER_H

@class NSString, NSOperationQueue, NSMutableDictionary;
@protocol QLListCellDataGenerationOperationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface QLListCellManager : NSObject <QLListCellDataGenerationOperationDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSOperationQueue *generationQueue; // ivar: _generationQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *operations; // ivar: _operations
@property (readonly) Class superclass;


-(id)init;
-(void)_operationDidFinish:(id)arg0 ;
-(void)dealloc;
-(void)operation:(id)arg0 didDetermineFileSize:(id)arg1 fileTypeString:(id)arg2 ;
-(void)operation:(id)arg0 didGenerateThumbnail:(id)arg1 ;
-(void)setupCell:(id)arg0 withItem:(id)arg1 atIndex:(NSUInteger)arg2 ;


@end


#endif