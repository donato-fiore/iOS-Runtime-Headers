// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREMOTEDEVICE_H
#define SAREMOTEDEVICE_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SARemoteDevice : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *brandName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *personalDomainsAuthenticationMode;
@property (copy, nonatomic) NSNumber *personalDomainsEnabled;
@property (nonatomic) BOOL siriEnabled;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userAgent;


+(id)remoteDevice;
+(id)remoteDeviceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif