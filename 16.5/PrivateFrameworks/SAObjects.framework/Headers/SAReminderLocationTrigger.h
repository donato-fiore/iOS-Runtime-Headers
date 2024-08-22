// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAREMINDERLOCATIONTRIGGER_H
#define SAREMINDERLOCATIONTRIGGER_H

@class NSURL, NSString;


#import "SAReminderTrigger.h"
#import "SALocation.h"

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (copy, nonatomic) NSURL *contactIdentifier;
@property (copy, nonatomic) NSString *internalGUID;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mobileSpace;
@property (copy, nonatomic) NSString *timing;


+(id)locationTriggerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif