// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOCODECCONFIGURATION_H
#define HMDAUDIOCODECCONFIGURATION_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDAudioCodecParameters.h"
#import "HMDAudioCodecGroup.h"

@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDAudioCodecParameters *audioCodecParameters; // ivar: _audioCodecParameters
@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // ivar: _codecGroup
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodecGroup:(id)arg0 codecParameter:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif