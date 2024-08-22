// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTMPUMUTABLEFONTDESCRIPTOR_H
#define MTMPUMUTABLEFONTDESCRIPTOR_H



#import "MTMPUFontDescriptor.h"

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor

@property (nonatomic) CGFloat defaultPointSizeAdjustment;
@property (nonatomic) NSInteger leadingAdjustment;
@property (nonatomic) CGFloat systemFontSize;
@property (nonatomic) NSInteger textStyle;
@property (nonatomic) BOOL usesCondensedMetrics;
@property (nonatomic) BOOL usesItalic;
@property (nonatomic) BOOL wantsMonospaceNumbers;
@property (nonatomic) NSInteger weight;


-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_resetToDefaultValues;


@end


#endif