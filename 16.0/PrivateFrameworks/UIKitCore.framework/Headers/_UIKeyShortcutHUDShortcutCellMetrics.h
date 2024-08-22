// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUTCELLMETRICS_H
#define _UIKEYSHORTCUTHUDSHORTCUTCELLMETRICS_H


#import <Foundation/Foundation.h>


@interface _UIKeyShortcutHUDShortcutCellMetrics : NSObject

@property (readonly, nonatomic) CGFloat cellWidth; // ivar: _cellWidth
@property (readonly, nonatomic) CGFloat inputWidth; // ivar: _inputWidth
@property (readonly, nonatomic) CGFloat modifiersWidth; // ivar: _modifiersWidth


+(id)metricsWithCellWidth:(CGFloat)arg0 modifiersWidth:(CGFloat)arg1 inputWidth:(CGFloat)arg2 ;


@end


#endif