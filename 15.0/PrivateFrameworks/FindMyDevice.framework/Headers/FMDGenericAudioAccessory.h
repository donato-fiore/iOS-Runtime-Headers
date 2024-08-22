// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMDGENERICAUDIOACCESSORY_H
#define FMDGENERICAUDIOACCESSORY_H

@class NSString, NSURL;
@protocol NSSecureCoding, FMDAudioAccessory, FMDAccessory;

#import <Foundation/Foundation.h>

#import "FMDAccessoryIdentifier.h"
#import "FMDAudioAccessoryInfo.h"

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory>



@property (retain, nonatomic) FMDAccessoryIdentifier *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) FMDAudioAccessoryInfo *audioAccessoryInfo; // ivar: _audioAccessoryInfo
@property (retain, nonatomic) NSString *audioRoutingIdentifier; // ivar: _audioRoutingIdentifier
@property (readonly, nonatomic) NSUInteger audioSafetyStatus;
@property (retain, nonatomic) NSURL *audioURL; // ivar: _audioURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL playingSound;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsChangingListeningMode; // ivar: _supportsChangingListeningMode


+(BOOL)supportsSecureCoding;
+(id)copyAccessory:(id)arg0 ;
-(BOOL)updateAudioAsset:(id)arg0 ;
-(BOOL)updatePlaybackChannels:(id)arg0 ;
-(id)initWithAccessoryId:(id)arg0 audioRoutingIdentifier:(id)arg1 audioURL:(id)arg2 audioAccessoryInfo:(id)arg3 supportsChangingListeningMode:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif