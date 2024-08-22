// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCHANGEHISTORYDROPEVERYTHINGEVENT_H
#define CNCHANGEHISTORYDROPEVERYTHINGEVENT_H



#import "CNChangeHistoryEvent.h"

@interface CNChangeHistoryDropEverythingEvent : CNChangeHistoryEvent



+(BOOL)supportsSecureCoding;
+(NSUInteger)instanceSortOrder;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)acceptEventVisitor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif