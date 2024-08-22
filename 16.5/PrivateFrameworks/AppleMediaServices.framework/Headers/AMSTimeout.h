// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSTIMEOUT_H
#define AMSTIMEOUT_H

@protocol AMSTimeoutClockSource;

#import <Foundation/Foundation.h>


@interface AMSTimeout : NSObject

@property (retain, nonatomic) NSObject<AMSTimeoutClockSource> *clockSource; // ivar: _clockSource
@property (nonatomic) CGFloat expirationTimestamp; // ivar: _expirationTimestamp
@property (readonly, nonatomic, getter=hasExpired) BOOL expired; // ivar: _expired
@property (nonatomic) CGFloat timestampAtPreviousQuery; // ivar: _timestampAtPreviousQuery


+(id)timeoutWithExpiration:(CGFloat)arg0 ;
-(id)initWithExpiration:(CGFloat)arg0 clockSource:(id)arg1 ;


@end


#endif