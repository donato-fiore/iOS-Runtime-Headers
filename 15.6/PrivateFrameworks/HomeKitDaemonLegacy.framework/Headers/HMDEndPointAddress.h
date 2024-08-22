// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDENDPOINTADDRESS_H
#define HMDENDPOINTADDRESS_H

@class HAPTLVBase, NSNumber, NSString;
@protocol HAPTLVCreateParse, NSSecureCoding;



@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *audioRTPPort; // ivar: _audioRTPPort
@property (readonly, copy, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (readonly, nonatomic) BOOL isIPv6Address; // ivar: _isIPv6Address
@property (readonly, copy, nonatomic) NSNumber *videoRTPPort; // ivar: _videoRTPPort


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(BOOL)compatibleWithRemoteEndPoint:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIPAddress:(id)arg0 isIPv6Address:(BOOL)arg1 videoRTPPort:(id)arg2 audioRTPPort:(id)arg3 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif