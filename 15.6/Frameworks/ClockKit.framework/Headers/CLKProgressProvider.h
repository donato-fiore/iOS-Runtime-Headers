// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKPROGRESSPROVIDER_H
#define CLKPROGRESSPROVIDER_H

@class NSMutableDictionary, UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLKClockTimerToken.h"

@interface CLKProgressProvider : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    CLKClockTimerToken *_timerToken;
    BOOL _finalized;
}


@property CGFloat backgroundRingAlpha; // ivar: _backgroundRingAlpha
@property (readonly, nonatomic) BOOL needsTimerUpdates;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(BOOL)supportsSecureCoding;
-(BOOL)_needsUpdates;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validate;
-(CGFloat)_progressFractionForNow:(id)arg0 ;
-(CGFloat)progressFractionForNow:(id)arg0 ;
-(NSInteger)timeTravelUpdateFrequency;
-(NSUInteger)hash;
-(id)JSONObjectRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)startUpdatesWithHandler:(id)arg0 ;
-(void)_commonInit;
-(void)_maybeStartOrStopUpdates;
-(void)_update;
-(void)_validate;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;
-(void)stopUpdatesForToken:(id)arg0 ;


@end


#endif