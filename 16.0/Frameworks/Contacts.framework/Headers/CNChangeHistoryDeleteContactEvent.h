// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYDELETECONTACTEVENT_H
#define CNCHANGEHISTORYDELETECONTACTEVENT_H

@class NSString;


#import "CNChangeHistoryEvent.h"

@interface CNChangeHistoryDeleteContactEvent : CNChangeHistoryEvent

@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy, nonatomic) NSString *externalModificationTag; // ivar: _externalModificationTag
@property (readonly, copy, nonatomic) NSString *externalURI; // ivar: _externalURI


+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)comparisonResultWithinSameClass:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 externalURI:(id)arg1 externalModificationTag:(id)arg2 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif