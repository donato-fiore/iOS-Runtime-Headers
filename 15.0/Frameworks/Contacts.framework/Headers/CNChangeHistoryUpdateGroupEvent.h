// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYUPDATEGROUPEVENT_H
#define CNCHANGEHISTORYUPDATEGROUPEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNGroup.h"

@interface CNChangeHistoryUpdateGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *group; // ivar: _group


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif