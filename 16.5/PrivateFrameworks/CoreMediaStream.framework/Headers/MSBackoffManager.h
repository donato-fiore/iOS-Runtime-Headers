// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSBACKOFFMANAGER_H
#define MSBACKOFFMANAGER_H

@class NSDate;
@protocol NSSecureCoding, MSBackoffManagerDelegate;

#import <Foundation/Foundation.h>


@interface MSBackoffManager : NSObject <NSSecureCoding>

 {
    NSDate *_nextExpiryDate;
}


@property (nonatomic) CGFloat backoffFactor; // ivar: _backoffFactor
@property (nonatomic) CGFloat currentInterval; // ivar: _currentInterval
@property (nonatomic) NSObject<MSBackoffManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat initialInterval; // ivar: _initialInterval
@property (nonatomic) CGFloat maxBackoffInterval; // ivar: _maxBackoffInterval
@property (retain) NSDate *nextExpiryDate;
@property (nonatomic) CGFloat randomizeFactor; // ivar: _randomizeFactor
@property (retain) NSDate *retryAfterDate; // ivar: _retryAfterDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyParameters;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInitialInterval:(CGFloat)arg0 backoffFactor:(CGFloat)arg1 randomizeFactor:(CGFloat)arg2 maxBackoffInterval:(CGFloat)arg3 retryAfterDate:(id)arg4 ;
-(void)_complainAboutMissingKeyInArchive:(id)arg0 ;
-(void)backoff;
-(void)didReceiveRetryAfterDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reset;


@end


#endif