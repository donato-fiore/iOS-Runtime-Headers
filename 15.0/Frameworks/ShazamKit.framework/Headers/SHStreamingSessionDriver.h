// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSTREAMINGSESSIONDRIVER_H
#define SHSTREAMINGSESSIONDRIVER_H

@class NSString;
@protocol SHMatcherDelegate, SHSessionDriverDelegate;

#import <Foundation/Foundation.h>

#import "SHSignature.h"
#import "SHSignatureMetrics.h"
#import "SHSignatureBuffer.h"

@interface SHStreamingSessionDriver : NSObject <SHMatcherDelegate>



@property (nonatomic) CGFloat currentRequiredDuration; // ivar: _currentRequiredDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SHSignature *matchingSignature;
@property (nonatomic) CGFloat maximumSignatureDuration; // ivar: _maximumSignatureDuration
@property (retain, nonatomic) SHSignatureMetrics *metrics; // ivar: _metrics
@property (nonatomic) CGFloat minimumSignatureDuration; // ivar: _minimumSignatureDuration
@property (weak, nonatomic) NSObject<SHSessionDriverDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (retain, nonatomic) SHSignatureBuffer *signatureBuffer; // ivar: _signatureBuffer
@property (readonly) Class superclass;
@property (nonatomic) BOOL waiting; // ivar: _waiting


-(BOOL)isCurrentSignature:(id)arg0 ;
-(CGFloat)clampTimeInterval:(CGFloat)arg0 ;
-(id)initWithMinimumSignatureDuration:(CGFloat)arg0 maximumSignatureDuration:(CGFloat)arg1 ;
-(void)flow:(id)arg0 time:(id)arg1 ;
-(void)match;
-(void)matcher:(id)arg0 didFail:(id)arg1 ;
-(void)matcher:(id)arg0 didFindMatch:(id)arg1 ;
-(void)matcher:(id)arg0 didFinishWithOutcome:(NSInteger)arg1 ;
-(void)matcher:(id)arg0 didNotFindMatch:(id)arg1 ;
-(void)startResetTimerForIntermission:(CGFloat)arg0 requiredSignatureDuration:(CGFloat)arg1 ;


@end


#endif