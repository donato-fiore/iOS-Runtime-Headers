// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICESETUPCONTEXT_H
#define SADEVICESETUPCONTEXT_H

@class NSString;


#import "SADomainObject.h"

@interface SADeviceSetupContext : SADomainObject

@property (copy, nonatomic) NSString *setupSceneId;


+(id)setupContext;
+(id)setupContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif