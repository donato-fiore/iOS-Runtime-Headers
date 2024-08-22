// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSTRINGDRAWINGCONTEXT_H
#define NSSTRINGDRAWINGCONTEXT_H

@class CUICatalog, CUIStyleEffectConfiguration, NSString;
@protocol NSLayoutManagerDelegate;

#import <Foundation/Foundation.h>


@interface NSStringDrawingContext : NSObject <NSLayoutManagerDelegate>

 {
    CGFloat _minimumTrackingAdjustment;
    ? _sdcFlags;
}


@property (nonatomic) NSUInteger activeRenderers;
@property (nonatomic) CGFloat actualScaleFactor; // ivar: _actualScaleFactor
@property (readonly, nonatomic) CGFloat actualTrackingAdjustment;
@property (nonatomic) CGFloat actualTrackingAdjustment; // ivar: _actualTrackingAdjustment
@property (nonatomic) CGFloat baselineOffset; // ivar: _baselineOffset
@property (nonatomic) BOOL cachesLayout;
@property (retain, nonatomic) CUICatalog *cuiCatalog; // ivar: _CUICatalog
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // ivar: _CUIStyleEffects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsDebugBaselines;
@property (nonatomic) CGFloat firstBaselineOffset; // ivar: _firstBaselineOffset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *layout; // ivar: _layout
@property (copy) id *linkTextAttributesProvider; // ivar: _linkTextAttributesProvider
@property (nonatomic) NSUInteger maximumNumberOfLines; // ivar: _maximumNumberOfLines
@property (nonatomic) CGFloat minimumScaleFactor; // ivar: _minimumScaleFactor
@property (nonatomic) CGFloat minimumTrackingAdjustment;
@property (nonatomic) NSUInteger numberOfLineFragments; // ivar: _numberOfLineFragments
@property (nonatomic) CGFloat scaledBaselineOffset; // ivar: _scaledBaselineOffset
@property (nonatomic) CGFloat scaledLineHeight; // ivar: _scaledLineHeight
@property (readonly) Class superclass;
@property (nonatomic) CGRect totalBounds; // ivar: _totalBounds
@property (nonatomic) BOOL usesSimpleTextEffects;
@property (nonatomic) BOOL wantsBaselineOffset;
@property (nonatomic) BOOL wantsNumberOfLineFragments;
@property (nonatomic) BOOL wantsScaledBaselineOffset;
@property (nonatomic) BOOL wantsScaledLineHeight;
@property (nonatomic) BOOL wrapsForTruncationMode;


-(NSInteger)applicationFrameworkContext;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)layoutManager:(id)arg0 linkAttributesForAttributes:(id)arg1 forCharacterAtIndex:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)setApplicationFrameworkContext:(NSInteger)arg0 ;


@end


#endif