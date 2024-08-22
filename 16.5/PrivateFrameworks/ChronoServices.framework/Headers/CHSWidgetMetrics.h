// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSWIDGETMETRICS_H
#define CHSWIDGETMETRICS_H

@class NSString;
@protocol BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSWidgetMetrics : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fontStyle; // ivar: _fontStyle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CHSEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (readonly, nonatomic) CGSize scale;
@property (readonly, nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger textSizeAdjustment;


+(BOOL)supportsSecureCoding;
+(void)_removeSafeAreaInsetsIn:(id)arg0 ;
+(void)_replaceFontStyleIn:(id)arg0 withTextSizeAdjustment:(NSInteger)arg1 ;
-(BOOL)_isUnitScale;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_effectiveCornerRadius;
-(CGFloat)_roundToNearestOrUp:(CGFloat)arg0 withScale:(CGFloat)arg1 ;
-(id)_stringKeyRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 scale:(struct CGSize )arg2 textSizeAdjustment:(NSInteger)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 scaleFactor:(CGFloat)arg2 fontStyle:(NSInteger)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 scaleFactor:(CGFloat)arg2 fontStyle:(NSInteger)arg3 safeAreaInsets:(struct CHSEdgeInsets )arg4 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 scaleFactor:(CGFloat)arg2 textSizeAdjustment:(NSInteger)arg3 ;
-(id)initWithSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 textSizeAdjustment:(NSInteger)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct CGSize )_effectiveSizePixelAlignedForDisplayScale:(CGFloat)arg0 ;
-(struct CGSize )_rawEffectiveSize;
-(struct CGSize )_rawSizePixelAlignedForDisplayScale:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif