// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYADDMEMBERTOGROUPEVENT_H
#define CNCHANGEHISTORYADDMEMBERTOGROUPEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNGroup.h"
#import "CNContact.h"

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNGroup *group; // ivar: _group
@property (readonly, nonatomic) CNContact *member; // ivar: _member


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMember:(id)arg0 group:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif