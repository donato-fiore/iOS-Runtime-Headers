// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDRESELECTEDRTPPARAMETERS_H
#define HMDRESELECTEDRTPPARAMETERS_H

@class HAPTLVBase, NSNumber, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDReselectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *maximumBitrate; // ivar: _maximumBitrate
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate; // ivar: _minimumBitrate
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval; // ivar: _rtcpInterval
@property (readonly, copy) NSData *tlvData;


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumBitrate:(id)arg0 minimumBitrate:(id)arg1 rtcpInterval:(id)arg2 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif