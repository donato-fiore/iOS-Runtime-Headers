// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SADEVICECARDNDHINTCONTEXT_H
#define SADEVICECARDNDHINTCONTEXT_H

@class NSString;


#import "SADomainObject.h"

@interface SADeviceCarDNDHintContext : SADomainObject

@property (copy, nonatomic) NSString *utteranceDomainIdentifier;


+(id)carDNDHintContext;
+(id)carDNDHintContextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif