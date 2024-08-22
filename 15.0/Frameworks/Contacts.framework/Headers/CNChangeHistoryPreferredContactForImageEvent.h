// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCHANGEHISTORYPREFERREDCONTACTFORIMAGEEVENT_H
#define CNCHANGEHISTORYPREFERREDCONTACTFORIMAGEEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNContact.h"

@interface CNChangeHistoryPreferredContactForImageEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *preferredContact; // ivar: _preferredContact
@property (readonly, nonatomic) CNContact *unifiedContact; // ivar: _unifiedContact


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPreferredContact:(id)arg0 unifiedContact:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif