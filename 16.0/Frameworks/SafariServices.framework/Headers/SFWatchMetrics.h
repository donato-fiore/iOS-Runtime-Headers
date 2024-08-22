// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFWATCHMETRICS_H
#define SFWATCHMETRICS_H


#import <Foundation/Foundation.h>


@interface SFWatchMetrics : NSObject

@property (readonly, nonatomic) CGFloat closeButtonTopToBaselineSpacing; // ivar: _closeButtonTopToBaselineSpacing
@property (readonly, nonatomic) CGFloat headerButtonFontPointSize; // ivar: _headerButtonFontPointSize
@property (readonly, nonatomic) CGFloat headerButtonPadding; // ivar: _headerButtonPadding
@property (readonly, nonatomic) CGFloat minimumFontScaleFactor;


+(id)currentMetrics;
-(id)init;


@end


#endif