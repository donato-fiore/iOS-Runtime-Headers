// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSTREAMINGSESSIONDRIVER_H
#define SHSTREAMINGSESSIONDRIVER_H

@class NSString, NSDate, NSUUID;
@protocol SHSessionDriver, SHSessionDriverDelegate;

#import <Foundation/Foundation.h>

#import "SHSignatureMetrics.h"
#import "SHSignatureBuffer.h"

@interface SHStreamingSessionDriver : NSObject <SHSessionDriver>



@property (nonatomic) CGFloat currentRequiredDuration; // ivar: _currentRequiredDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *intermissionDeadline; // ivar: _intermissionDeadline
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSUUID *matchingSignatureID; // ivar: _matchingSignatureID
@property (readonly, nonatomic) SHSignatureMetrics *metrics; // ivar: _metrics
@property (weak, nonatomic) NSObject<SHSessionDriverDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (retain, nonatomic) SHSignatureBuffer *signatureBuffer; // ivar: _signatureBuffer
@property (readonly) Class superclass;


-(BOOL)canPerformMatch;
-(id)initWithMinimumSignatureDuration:(CGFloat)arg0 maximumSignatureDuration:(CGFloat)arg1 bufferDuration:(CGFloat)arg2 ;
-(id)initWithSignatureBuffer:(id)arg0 ;
-(id)signatureForMatching;
-(void)flow:(id)arg0 time:(id)arg1 ;
-(void)matcher:(id)arg0 didProduceResponse:(id)arg1 ;
-(void)receivedSignature:(id)arg0 retry:(CGFloat)arg1 intermission:(CGFloat)arg2 dropCurrentSignature:(BOOL)arg3 ;


@end


#endif