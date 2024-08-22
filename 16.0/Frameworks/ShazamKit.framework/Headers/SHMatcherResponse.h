// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMATCHERRESPONSE_H
#define SHMATCHERRESPONSE_H

@class NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SHMatch.h"
#import "SHSignature.h"

@interface SHMatcherResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL isStillRunningAssociatedRequest; // ivar: _isStillRunningAssociatedRequest
@property (readonly, nonatomic) SHMatch *match; // ivar: _match
@property (readonly, nonatomic) CGFloat recordingIntermission; // ivar: _recordingIntermission
@property (readonly, nonatomic) NSInteger result;
@property (readonly, nonatomic) CGFloat retrySeconds; // ivar: _retrySeconds
@property (readonly, nonatomic) SHSignature *signature; // ivar: _signature


+(BOOL)supportsSecureCoding;
+(id)errorResponseForSignature:(id)arg0 error:(id)arg1 ;
+(id)matchWithRecordingIntermission:(CGFloat)arg0 retrySeconds:(CGFloat)arg1 match:(id)arg2 ;
+(id)noMatchWithRecordingIntermission:(CGFloat)arg0 retrySeconds:(CGFloat)arg1 signature:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordingIntermission:(CGFloat)arg0 retrySeconds:(CGFloat)arg1 match:(id)arg2 signature:(id)arg3 stillRunningAssociatedRequest:(BOOL)arg4 error:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validate;


@end


#endif