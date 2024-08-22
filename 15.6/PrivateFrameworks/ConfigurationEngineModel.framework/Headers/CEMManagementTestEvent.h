// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMMANAGEMENTTESTEVENT_H
#define CEMMANAGEMENTTESTEVENT_H

@class NSString;
@protocol CEMRegisteredTypeProtocol;


#import "CEMEventBase.h"

@interface CEMManagementTestEvent : CEMEventBase <CEMRegisteredTypeProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedPayloadKeys;
+(id)build;
+(id)buildRequiredOnly;
+(id)registeredClassName;
+(id)registeredIdentifier;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif