// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCHANGEHISTORYREMOVESUBGROUPFROMGROUPEVENT_H
#define CNCHANGEHISTORYREMOVESUBGROUPFROMGROUPEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNGroup.h"

@interface CNChangeHistoryRemoveSubgroupFromGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *group; // ivar: _group
@property (readonly, nonatomic) CNGroup *subgroup; // ivar: _subgroup


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubgroup:(id)arg0 group:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif