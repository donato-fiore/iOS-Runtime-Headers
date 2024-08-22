// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKVICTORYTIMELABEL_H
#define NTKVICTORYTIMELABEL_H

@class NSHashTable, UIColor;


#import "NTKDigitalTimeLabel.h"

@interface NTKVictoryTimeLabel : NTKDigitalTimeLabel

@property (nonatomic) CGFloat additionalPaddingInsets; // ivar: _additionalPaddingInsets
@property (retain, nonatomic) NSHashTable *labels; // ivar: _labels
@property (nonatomic) CGFloat outlineAlpha; // ivar: _outlineAlpha
@property (retain, nonatomic) UIColor *outlineColor; // ivar: _outlineColor


-(id)_newUnderlyingLabel:(BOOL)arg0 ;
-(id)initWithTimeLabelOptions:(NSUInteger)arg0 forDevice:(id)arg1 additionalPaddingInsets:(CGFloat)arg2 ;


@end


#endif