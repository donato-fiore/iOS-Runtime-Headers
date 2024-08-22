// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21SIRIINFORMATIONSEARCH14POMMESRESPONSE_H
#define _TTC21SIRIINFORMATIONSEARCH14POMMESRESPONSE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch14PommesResponse : NSObject <NSSecureCoding>

 {
    ? experiences;
    ? clientResults;
    ? conversationContext;
    ? metadataDomainName;
    ? renderedTexts;
    ? pegasusDomainFlowStepLog;
    ? taskStepLogs;
    ? pegasusDomainUserSensitiveTier1Log;
    ? listenAfterSpeaking;
    ? requestId;
    ? resultCandidateId;
    ? isHandledByPreflight;
    ? preflightClientHandlerIdentifier;
    ? isPersonalDomainFallback;
    ? requestCountryCode;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif