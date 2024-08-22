// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVCALENDARSERVEREMAILADDRESSSETITEM_H
#define COREDAVCALENDARSERVEREMAILADDRESSSETITEM_H

@class NSMutableArray;


#import "CoreDAVItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // ivar: _unauthenticated


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addEmailAddress:(id)arg0 ;


@end


#endif