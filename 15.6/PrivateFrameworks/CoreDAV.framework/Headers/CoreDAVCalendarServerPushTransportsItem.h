// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVCALENDARSERVERPUSHTRANSPORTSITEM_H
#define COREDAVCALENDARSERVERPUSHTRANSPORTSITEM_H

@class NSMutableSet;


#import "CoreDAVItem.h"

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *transports; // ivar: _transports


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)addTransport:(id)arg0 ;


@end


#endif