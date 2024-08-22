// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSELECTEDAUDIOPARAMETERS_H
#define HMDSELECTEDAUDIOPARAMETERS_H

@class HAPTLVBase, NSNumber, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDAudioCodecGroup.h"
#import "HMDAudioCodecParameters.h"
#import "HMDSelectedRTPParameters.h"

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // ivar: _codecGroup
@property (readonly, copy, nonatomic) HMDAudioCodecParameters *codecParameters; // ivar: _codecParameters
@property (readonly, copy, nonatomic) NSNumber *comfortNoiseEnabled; // ivar: _comfortNoiseEnabled
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // ivar: _rtpParameters
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodecGroup:(id)arg0 codecParameter:(id)arg1 rtpParameter:(id)arg2 comfortNoiseEnabled:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif