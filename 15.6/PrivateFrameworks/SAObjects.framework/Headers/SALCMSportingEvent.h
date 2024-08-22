// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALCMSPORTINGEVENT_H
#define SALCMSPORTINGEVENT_H

@class NSURL;


#import "SALCMContent.h"

@interface SALCMSportingEvent : SALCMContent

@property (copy, nonatomic) NSURL *sportingEventId;


+(id)sportingEvent;
+(id)sportingEventWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif