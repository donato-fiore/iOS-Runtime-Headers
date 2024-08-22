// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUMUTABLEFONTDESCRIPTOR_H
#define MPUMUTABLEFONTDESCRIPTOR_H



#import "MPUFontDescriptor.h"

@interface MPUMutableFontDescriptor : MPUFontDescriptor

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