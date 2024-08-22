// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRCDEVICEAUTHENTICATIONCHALLENGE_H
#define TVRCDEVICEAUTHENTICATIONCHALLENGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TVRCDeviceAuthenticationChallenge : NSObject

@property (nonatomic) NSInteger challengeAttributes; // ivar: _challengeAttributes
@property (readonly, nonatomic) NSInteger challengeType; // ivar: _challengeType
@property (readonly, copy, nonatomic) NSString *codeToEnterOnDevice; // ivar: _codeToEnterOnDevice
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (nonatomic) NSInteger throttleSeconds; // ivar: _throttleSeconds


-(id)_initWithDeviceIdentifier:(id)arg0 challengeType:(NSInteger)arg1 codeToEnterOnDevice:(id)arg2 ;
-(void)cancel;
-(void)userEnteredCodeLocally:(id)arg0 ;


@end


#endif