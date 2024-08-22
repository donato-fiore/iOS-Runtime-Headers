// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMAPPLICATIONLOCKDECLARATION_APPUSERENABLEDOPTIONS_H
#define CEMAPPLICATIONLOCKDECLARATION_APPUSERENABLEDOPTIONS_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMApplicationLockDeclaration_AppUserEnabledOptions : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAssistiveTouch; // ivar: _payloadAssistiveTouch
@property (copy, nonatomic) NSNumber *payloadInvertColors; // ivar: _payloadInvertColors
@property (copy, nonatomic) NSNumber *payloadVoiceOver; // ivar: _payloadVoiceOver
@property (copy, nonatomic) NSNumber *payloadZoom; // ivar: _payloadZoom


+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithVoiceOver:(id)arg0 withZoom:(id)arg1 withInvertColors:(id)arg2 withAssistiveTouch:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif