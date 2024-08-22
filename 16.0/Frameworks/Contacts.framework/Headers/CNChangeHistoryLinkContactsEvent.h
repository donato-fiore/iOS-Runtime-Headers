// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYLINKCONTACTSEVENT_H
#define CNCHANGEHISTORYLINKCONTACTSEVENT_H



#import "CNChangeHistoryEvent.h"
#import "CNContact.h"

@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) CNContact *fromContact; // ivar: _fromContact
@property (readonly, nonatomic) CNContact *toContact; // ivar: _toContact
@property (readonly, nonatomic) CNContact *unifiedContact; // ivar: _unifiedContact


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFromContact:(id)arg0 toContact:(id)arg1 unifiedContact:(id)arg2 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif