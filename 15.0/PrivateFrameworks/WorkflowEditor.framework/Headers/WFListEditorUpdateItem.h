// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLISTEDITORUPDATEITEM_H
#define WFLISTEDITORUPDATEITEM_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface WFListEditorUpdateItem : NSObject

@property (readonly, nonatomic) NSNumber *indexAfterUpdate; // ivar: _indexAfterUpdate
@property (readonly, nonatomic) NSNumber *indexBeforeUpdate; // ivar: _indexBeforeUpdate
@property (readonly, nonatomic) NSUInteger updateAction; // ivar: _updateAction


+(id)itemDeletedAtIndex:(NSUInteger)arg0 ;
+(id)itemInsertedAtIndex:(NSUInteger)arg0 ;
+(id)itemMovedFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
+(id)itemUpdatedAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithAction:(NSUInteger)arg0 indexBeforeUpdate:(id)arg1 indexAfterUpdate:(id)arg2 ;


@end


#endif