// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKEREQUESTCONTEXTDATA_H
#define SKEREQUESTCONTEXTDATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKERequestContextData : NSObject <NSSecureCoding>

 {
    ? inputOrigin;
    ? audioSource;
    ? audioDestination;
    ? isEyesFree;
    ? isDirectAction;
    ? isVoiceTriggerEnabled;
    ? isTextToSpeechEnabled;
    ? peerInfo;
    ? endpointInfo;
    ? instanceInfo;
    ? bargeInModes;
    ? approximatePreviousTTSInterval;
    ? restrictions;
    ? originatingHome;
}


@property (nonatomic, readonly) NSString *debugDescription;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif