// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NAGROUPEDITEMDIFF_H
#define NAGROUPEDITEMDIFF_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NAGroupedItemDiff : NSObject

@property (readonly, copy, nonatomic) NSArray *allOperations;
@property (copy, nonatomic) id *changeTest; // ivar: _changeTest
@property (copy, nonatomic) NSArray *fromGroups; // ivar: _fromGroups
@property (copy, nonatomic) NSArray *groupOperations; // ivar: _groupOperations
@property (copy, nonatomic) NSArray *itemOperations; // ivar: _itemOperations
@property (readonly, copy, nonatomic) NSString *operationDescription;
@property (copy, nonatomic) NSArray *toGroups; // ivar: _toGroups


+(id)_groupedItemDiffWithGroupOperations:(id)arg0 itemOperations:(id)arg1 ;
+(id)diffFromGroups:(id)arg0 toGroups:(id)arg1 ;
+(id)diffFromGroups:(id)arg0 toGroups:(id)arg1 changeTest:(id)arg2 ;
-(id)_briefDescriptionForOperations:(id)arg0 type:(id)arg1 ;
-(id)_operationDescriptionWithPrefix:(id)arg0 ;
-(id)_performItemDiffFromGroup:(id)arg0 atIndex:(id)arg1 toGroup:(id)arg2 atIndex:(NSUInteger)arg3 ;
-(id)debugDescription;
-(id)description;
-(id)initWithFromGroups:(id)arg0 toGroups:(id)arg1 changeTest:(id)arg2 ;
-(void)_performDiff;


@end


#endif