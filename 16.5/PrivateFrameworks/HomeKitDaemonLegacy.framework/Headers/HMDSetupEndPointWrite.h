// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSETUPENDPOINTWRITE_H
#define HMDSETUPENDPOINTWRITE_H

@class HAPTLVBase, NSUUID, NSData;
@protocol HAPTLVCreateParse, NSSecureCoding;


#import "HMDEndPointAddress.h"
#import "HMDSRTPParameters.h"

@interface HMDSetupEndPointWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>



@property (readonly, copy, nonatomic) HMDEndPointAddress *address; // ivar: _address
@property (readonly, copy, nonatomic) HMDSRTPParameters *audioSrtpParameters; // ivar: _audioSrtpParameters
@property (readonly, copy, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly, copy) NSData *tlvData;
@property (readonly, copy, nonatomic) HMDSRTPParameters *videoSrtpParameters; // ivar: _videoSrtpParameters


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(BOOL)_parseFromTLVDataImpl;
-(BOOL)_parseFromTLVDataOnFailure;
-(BOOL)_parseFromTLVDataOnSuccess;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 address:(id)arg1 videoSrtpParameters:(id)arg2 audioSrtpParameters:(id)arg3 ;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif