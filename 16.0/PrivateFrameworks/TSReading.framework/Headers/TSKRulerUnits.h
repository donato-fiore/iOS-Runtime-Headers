// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKRULERUNITS_H
#define TSKRULERUNITS_H

@class NSFormatter;

#import <Foundation/Foundation.h>


@interface TSKRulerUnits : NSObject {
    NSFormatter *_formatter;
    NSFormatter *_lenientFormatter;
    NSFormatter *_highPrecisionFormatter;
    NSFormatter *_lenientHighPrecisionFormatter;
}


@property (nonatomic) BOOL centerRulerOrigin; // ivar: _centerRulerOrigin
@property (nonatomic) int preferredPixelUnit; // ivar: _preferredPixelUnit
@property (nonatomic) int rulerUnits; // ivar: _rulerUnits
@property (nonatomic) BOOL showRulerAsPercentage; // ivar: _showRulerAsPercentage


+(id)formatterForRulerUnits:(int)arg0 decimalPlaces:(int)arg1 trailingZeros:(BOOL)arg2 lenient:(BOOL)arg3 ;
+(id)instance;
-(CGFloat)convertPointsToRulerUnits:(CGFloat)arg0 ;
-(CGFloat)convertRulerUnitsToPoints:(CGFloat)arg0 ;
-(id)compatibleRulerUnits;
-(id)formatter:(BOOL)arg0 lenient:(BOOL)arg1 ;
-(id)init;
-(id)localizedCompatibleRulerUnits;
-(void)dealloc;


@end


#endif