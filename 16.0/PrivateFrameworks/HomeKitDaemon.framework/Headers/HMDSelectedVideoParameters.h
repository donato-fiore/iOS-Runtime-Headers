// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSELECTEDVIDEOPARAMETERS_H
#define HMDSELECTEDVIDEOPARAMETERS_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDVideoCodec.h"
#import "HMDVideoCodecParameters.h"
#import "HMDSelectedRTPParameters.h"
#import "HMDVideoAttributes.h"

@interface HMDSelectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDVideoCodec *codec; // ivar: _codec
@property (readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // ivar: _codecParameters
@property (readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // ivar: _rtpParameters
@property (readonly, copy) NSData *tlvData;
@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // ivar: _videoAttributes


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg0 codecParameter:(id)arg1 attribute:(id)arg2 rtpParameter:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif