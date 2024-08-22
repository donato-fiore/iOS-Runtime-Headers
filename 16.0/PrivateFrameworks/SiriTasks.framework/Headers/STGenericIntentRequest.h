// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STGENERICINTENTREQUEST_H
#define STGENERICINTENTREQUEST_H

@class AFSiriRequest, NSString, NSDictionary;



@interface STGenericIntentRequest : AFSiriRequest {
    NSString *_appIdentifier;
    NSString *_intentString;
    NSString *_utterance;
    NSDictionary *_info;
}


@property (nonatomic, setter=_setLaunchToForeground:) BOOL _launchToForeground; // ivar: __launchToForeground


+(BOOL)supportsSecureCoding;
-(BOOL)_makeAppFrontmost;
-(BOOL)isForegroundLaunch;
-(id)_af_analyticsContextDescription;
-(id)appIdentifier;
-(id)info;
-(id)initWithAppIdentifier:(id)arg0 intentString:(id)arg1 utterance:(id)arg2 info:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)intentString;
-(id)responseWithCode:(NSInteger)arg0 ;
-(id)utterance;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif