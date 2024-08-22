// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSELECTEDSTREAMCONFIGURATIONWRITE_H
#define HMDSELECTEDSTREAMCONFIGURATIONWRITE_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDSelectedAudioParameters.h"
#import "HMDSessionControl.h"
#import "HMDSelectedVideoParameters.h"

@interface HMDSelectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDSelectedAudioParameters *audioParameters; // ivar: _audioParameters
@property (readonly, copy, nonatomic) HMDSessionControl *sessionControl; // ivar: _sessionControl
@property (readonly, copy) NSData *tlvData;
@property (readonly, copy, nonatomic) HMDSelectedVideoParameters *videoParameters; // ivar: _videoParameters


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionControl:(id)arg0 ;
-(id)initWithSessionControl:(id)arg0 videoParameters:(id)arg1 audioParameters:(id)arg2 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif