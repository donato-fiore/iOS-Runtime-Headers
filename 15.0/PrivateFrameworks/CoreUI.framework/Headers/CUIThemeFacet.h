// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUITHEMEFACET_H
#define CUITHEMEFACET_H

@class NSString;
@protocol CUIThemeImageSource, NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>

 {
    *_renditionkeytoken _renditionKeyList;
    NSUInteger _themeIndex;
    NSInteger _renditionType;
    CGSize _thumbnailSize;
    CGPoint _hotSpot;
    int _isTintable;
    ? _fFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)assetExistsForRenditionKey:(id)arg0 fromTheme:(NSUInteger)arg1 ;
+(NSUInteger)themeForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
+(NSUInteger)themeNamed:(id)arg0 forBundleIdentifier:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)themeWithBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
+(NSUInteger)themeWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)_bundleIdentifierForThemeRef:(NSUInteger)arg0 ;
+(id)_facetWithKeyList:(struct _renditionkeytoken *)arg0 andRenditionKeyClass:(Class)arg1 orRenditionKey:(id)arg2 fromTheme:(NSUInteger)arg3 ;
+(id)_themeStoreForThemeIndex:(NSUInteger)arg0 ;
+(id)cursorFacetWithName:(id)arg0 fromTheme:(NSUInteger)arg1 ;
+(id)facetWithElement:(NSInteger)arg0 part:(NSInteger)arg1 dimension1:(NSInteger)arg2 dimension2:(NSInteger)arg3 fromTheme:(NSUInteger)arg4 ;
+(id)facetWithElement:(NSInteger)arg0 part:(NSInteger)arg1 fromTheme:(NSUInteger)arg2 ;
+(id)facetWithRenditionKey:(id)arg0 fromTheme:(NSUInteger)arg1 ;
+(void)_invalidateArtworkCaches;
+(void)initialize;
+(void)themeUnregisterThemeRef:(NSUInteger)arg0 ;
-(BOOL)_canGetRenditionForKey:(id)arg0 withDrawingLayer:(NSInteger)arg1 ;
-(BOOL)_isButtonGlyph;
-(BOOL)hasValueSlices;
-(BOOL)hitTestAtPoint:(struct CGPoint )arg0 inFrame:(struct CGRect )arg1 owner:(id)arg2 userInfo:(id)arg3 ;
-(BOOL)isTintable;
-(BOOL)isValidButtonImageSource;
-(CGFloat)alpha;
-(CGFloat)alphaWithKeyAdjustment:(id)arg0 ;
-(NSInteger)_sliceIndexForSlice:(NSInteger)arg0 ofRendition:(id)arg1 ;
-(NSInteger)renditionType;
-(NSUInteger)themeIndex;
-(id)_rendition;
-(id)_renditionForSpecificKey:(id)arg0 ;
-(id)_themeStore;
-(id)blendModeAsCAFilterString;
-(id)blendModeAsCAFilterStringWithKeyAjustment:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayName;
-(id)gradientWithKeyAdjustment:(id)arg0 angle:(*CGFloat)arg1 style:(*NSUInteger)arg2 ;
-(id)highlightWithSize:(struct CGSize )arg0 keyAdjustment:(id)arg1 ;
-(id)image;
-(id)imageForSlice:(NSInteger)arg0 withKeyAdjustment:(id)arg1 ;
-(id)imageForSliceIndex:(NSInteger)arg0 ;
-(id)imageForState:(NSInteger)arg0 ;
-(id)imageForState:(NSInteger)arg0 value:(NSInteger)arg1 ;
-(id)imageForState:(NSInteger)arg0 value:(NSInteger)arg1 size:(NSUInteger)arg2 ;
-(id)imageForState:(NSInteger)arg0 withValue:(NSInteger)arg1 ;
-(id)imageWithSize:(struct CGSize )arg0 keyAdjustment:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRenditionKey:(id)arg0 fromTheme:(NSUInteger)arg1 ;
-(id)makeLayer;
-(id)maskForSlice:(NSInteger)arg0 withKeyAdjustment:(id)arg1 ;
-(id)maskWithSize:(struct CGSize )arg0 keyAdjustment:(id)arg1 ;
-(id)properties;
-(id)renditionForSpecificKeyWrapper:(id)arg0 ;
-(id)renditionKey;
-(id)renditionMetricsWithKeyAdjustment:(id)arg0 ;
-(id)renditionSliceInformationForRect:(struct CGRect )arg0 keyAdjustment:(id)arg1 ;
-(id)themeRendition;
-(id)thumbnail;
-(int)blendMode;
-(int)blendModeWithKeyAdjustment:(id)arg0 ;
-(struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg0 ;
-(struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg0 renditionKey:(id)arg1 ;
-(struct CGPoint )_hotSpot;
-(struct CGSize )_thumbnailSizeForRendition:(id)arg0 ;
-(struct CGSize )imageSize;
-(struct CGSize )sizeForSegmentOfType:(int)arg0 ;
-(struct CGSize )thumbnailSize;
-(struct CGSize )topLeftCapSize;
-(void)_applyFixedAttributesToKey:(id)arg0 ;
-(void)_drawSlice:(NSInteger)arg0 inFrame:(struct CGRect )arg1 withKeyAdjustment:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)_drawSpecificRenditionKey:(id)arg0 inFrame:(struct CGRect )arg1 context:(struct CGContext *)arg2 alpha:(CGFloat)arg3 operation:(int)arg4 isFocused:(int)arg5 isFlipped:(BOOL)arg6 effects:(id)arg7 ;
-(void)_setHasCheckedButtonGlyph:(BOOL)arg0 ;
-(void)_setIsButtonGlyph:(BOOL)arg0 ;
-(void)_setThemeIndex:(NSUInteger)arg0 ;
-(void)_updateSpecificRenditionKey:(id)arg0 isFocused:(*BOOL)arg1 owner:(id)arg2 userInfo:(id)arg3 ;
-(void)dealloc;
-(void)drawAbsoluteAnimationFrame:(CGFloat)arg0 destinationFrame:(struct CGRect )arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 ;
-(void)drawAnimationFrameMappedFrom0_1RangedValue:(CGFloat)arg0 destinationFrame:(struct CGRect )arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 ;
-(void)drawAnimationFrameMappedFrom0_1RangedValue:(CGFloat)arg0 destinationFrame:(struct CGRect )arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4 ;
-(void)drawAsOnePartWithSlice:(int)arg0 inFrame:(struct CGRect )arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4 ;
-(void)drawGradientInFrame:(struct CGRect )arg0 angle:(CGFloat)arg1 alpha:(CGFloat)arg2 operation:(int)arg3 isFocused:(int)arg4 keyAdjustment:(id)arg5 context:(struct CGContext *)arg6 effects:(id)arg7 ;
-(void)drawHighlightInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 keyAdjustment:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawHighlightInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawHighlightInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5 ;
-(void)drawHighlightInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawHighlightInFrame:(struct CGRect )arg0 owner:(id)arg1 userInfo:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 isFocused:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 isFocused:(int)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 isFocused:(int)arg3 context:(struct CGContext *)arg4 effects:(id)arg5 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 owner:(id)arg3 userInfo:(id)arg4 context:(struct CGContext *)arg5 ;
-(void)drawInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawInFrame:(struct CGRect )arg0 isFocused:(int)arg1 context:(struct CGContext *)arg2 ;
-(void)drawInFrame:(struct CGRect )arg0 isFocused:(int)arg1 context:(struct CGContext *)arg2 effects:(id)arg3 ;
-(void)drawInFrame:(struct CGRect )arg0 owner:(id)arg1 userInfo:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawMaskInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 isFocused:(int)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawMaskInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 operation:(int)arg2 isFocused:(int)arg3 keyAdjustment:(id)arg4 context:(struct CGContext *)arg5 ;
-(void)drawMaskInFrame:(struct CGRect )arg0 alpha:(CGFloat)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawMaskInFrame:(struct CGRect )arg0 owner:(id)arg1 userInfo:(id)arg2 context:(struct CGContext *)arg3 ;
-(void)drawPulseInFrame:(struct CGRect )arg0 pulseValue:(CGFloat)arg1 isFocused:(int)arg2 keyAdjustment:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawPulseInFrame:(struct CGRect )arg0 pulseValue:(CGFloat)arg1 owner:(id)arg2 userInfo:(id)arg3 context:(struct CGContext *)arg4 ;
-(void)drawSegmentInFrame:(struct CGRect )arg0 isFocused:(int)arg1 segmentType:(int)arg2 context:(struct CGContext *)arg3 effects:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateLayer:(id)arg0 ;
-(void)updateLayer:(id)arg0 effects:(id)arg1 ;
-(void)updateSegmentBezelLeadingCapLayer:(id)arg0 bezelFillLayer:(id)arg1 trailingBezelCapLayer:(id)arg2 forSegmentType:(int)arg3 segmentBounds:(struct CGRect )arg4 leadingSeparatorWidth:(CGFloat)arg5 trailingSeparatorWidth:(CGFloat)arg6 renditionKey:(id)arg7 effects:(id)arg8 ;


@end


#endif