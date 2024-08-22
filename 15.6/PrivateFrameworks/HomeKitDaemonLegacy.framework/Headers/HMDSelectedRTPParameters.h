// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSELECTEDRTPPARAMETERS_H
#define HMDSELECTEDRTPPARAMETERS_H

@class HAPTLVBase, NSNumber;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDSelectedRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *comfortNoisePayloadType; // ivar: _comfortNoisePayloadType
@property (copy, nonatomic) NSNumber *maxMTU; // ivar: _maxMTU
@property (readonly, copy, nonatomic) NSNumber *maximumBitrate; // ivar: _maximumBitrate
@property (readonly, copy, nonatomic) NSNumber *minimumBitrate; // ivar: _minimumBitrate
@property (readonly, copy, nonatomic) NSNumber *payloadType; // ivar: _payloadType
@property (readonly, copy, nonatomic) NSNumber *rtcpInterval; // ivar: _rtcpInterval
@property (retain, nonatomic) NSNumber *synchronizationSource; // ivar: _synchronizationSource


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPayloadType:(id)arg0 maximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3 maxMTU:(id)arg4 comfortNoisePayloadType:(id)arg5 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif