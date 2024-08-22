// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYADDGROUPEVENT_H
#define CNCHANGEHISTORYADDGROUPEVENT_H

@class NSString;


#import "CNChangeHistoryEvent.h"
#import "CNGroup.h"

@interface CNChangeHistoryAddGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) CNGroup *group; // ivar: _group


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroup:(id)arg0 containerIdentifier:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif