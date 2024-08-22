// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETUPENDPOINTREAD_H
#define HMDSETUPENDPOINTREAD_H

@class NSNumber;
@protocol NSSecureCoding;


#import "HMDSetupEndPointWrite.h"

@interface HMDSetupEndPointRead : HMDSetupEndPointWrite <NSSecureCoding>



@property (readonly, copy, nonatomic) NSNumber *audioSSRC; // ivar: _audioSSRC
@property (readonly, nonatomic) NSUInteger responseStatus; // ivar: _responseStatus
@property (readonly, copy, nonatomic) NSNumber *videoSSRC; // ivar: _videoSSRC


+(BOOL)supportsSecureCoding;
-(BOOL)_parseFromTLVData;
-(BOOL)_parseFromTLVDataOnFailure;
-(BOOL)_parseFromTLVDataOnSuccess;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 address:(id)arg1 videoSrtpParameters:(id)arg2 audioSrtpParameters:(id)arg3 responseStatus:(NSUInteger)arg4 videoSSRC:(id)arg5 audioSSRC:(id)arg6 ;
-(id)tlvData;
-(void)description:(id)arg0 indent:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif