// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPQUOTEDTEXTVIEWSTYLE_H
#define LPQUOTEDTEXTVIEWSTYLE_H

@class UIFont;
@protocol NSCopying;


#import "LPTextViewStyle.h"

@interface LPQuotedTextViewStyle : LPTextViewStyle <NSCopying>



@property (readonly, retain, nonatomic) LPTextViewStyle *characterLimitIndicatorStyle; // ivar: _characterLimitIndicatorStyle
@property (retain, nonatomic) UIFont *longPullQuoteFont; // ivar: _longPullQuoteFont
@property (nonatomic) unsigned int maximumLinesToConsiderShort; // ivar: _maximumLinesToConsiderShort
@property (nonatomic) BOOL showCharacterLimitIndicator; // ivar: _showCharacterLimitIndicator
@property (nonatomic) BOOL showQuoteIndicator; // ivar: _showQuoteIndicator


-(id)adjustedForString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPlatform:(NSInteger)arg0 fontScalingFactor:(CGFloat)arg1 ;


@end


#endif