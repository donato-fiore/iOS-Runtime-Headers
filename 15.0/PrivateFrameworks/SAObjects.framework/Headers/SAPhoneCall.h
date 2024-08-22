// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAPHONECALL_H
#define SAPHONECALL_H

@class NSNumber;


#import "SADomainCommand.h"
#import "SAPersonAttribute.h"

@interface SAPhoneCall : SADomainCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (copy, nonatomic) NSNumber *emergencyCall;
@property (nonatomic) BOOL faceTime;
@property (nonatomic) BOOL faceTimeAudio;
@property (nonatomic) BOOL handsFreeCall;
@property (nonatomic) BOOL speakerphoneCall;


+(id)call;
+(id)callWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif