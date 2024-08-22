// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDRESELECTEDVIDEOPARAMETERS_H
#define HMDRESELECTEDVIDEOPARAMETERS_H

@class HAPTLVBase, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDReselectedRTPParameters.h"
#import "HMDVideoAttributes.h"

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDReselectedRTPParameters *rtpParameters; // ivar: _rtpParameters
@property (readonly, copy) NSData *tlvData;
@property (readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // ivar: _videoAttributes


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithAttribute:(id)arg0 rtpParameter:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif