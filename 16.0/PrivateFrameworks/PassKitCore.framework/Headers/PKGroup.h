// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKGROUP_H
#define PKGROUP_H

@class NSMutableDictionary, NSNumber;
@protocol PKGroupDelegate;

#import <Foundation/Foundation.h>

#import "PKCatalogGroup.h"

@interface PKGroup : NSObject {
    PKCatalogGroup *_catalogGroup;
    NSMutableDictionary *_passesByUniqueID;
}


@property (weak, nonatomic) NSObject<PKGroupDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger frontmostPassIndex; // ivar: _frontmostPassIndex
@property (readonly, nonatomic) NSNumber *groupID;
@property (nonatomic, getter=isLocal) BOOL local; // ivar: _local


-(BOOL)containsOnlyUniqueID:(id)arg0 ;
-(BOOL)containsPasses;
-(NSUInteger)_indexOfUniqueID:(id)arg0 ;
-(NSUInteger)indexForPassUniqueID:(id)arg0 ;
-(NSUInteger)passCount;
-(id)copyCatalogGroup;
-(id)description;
-(id)init;
-(id)initWithCatalogGroup:(id)arg0 passes:(id)arg1 ;
-(id)passAtIndex:(NSUInteger)arg0 ;
-(id)passWithUniqueID:(id)arg0 ;
-(id)passes;
-(void)_insertPass:(id)arg0 atIndex:(NSUInteger)arg1 notify:(BOOL)arg2 ;
-(void)_moveUniqueID:(id)arg0 toIndex:(NSUInteger)arg1 notify:(BOOL)arg2 ;
-(void)_removeUniqueID:(id)arg0 notify:(BOOL)arg1 ;
-(void)_updatePass:(id)arg0 notify:(BOOL)arg1 ;
-(void)enumerateUniqueIDsWithHandler:(id)arg0 ;
-(void)handleUserPassDelete:(id)arg0 ;
-(void)movePass:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)updateWithCatalogGroup:(id)arg0 passes:(id)arg1 expiredSectionPasses:(id)arg2 notify:(BOOL)arg3 ;


@end


#endif