// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAUDIOCODECCONFIGURATION_H
#define HMDAUDIOCODECCONFIGURATION_H

@class HAPTLVBase;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDAudioCodecParameters.h"
#import "HMDAudioCodecGroup.h"

@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDAudioCodecParameters *audioCodecParameters; // ivar: _audioCodecParameters
@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // ivar: _codecGroup


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodecGroup:(id)arg0 codecParameter:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif