// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKTRANSITINFOLABELVIEW_H
#define MKTRANSITINFOLABELVIEW_H

@class MKUILabel, NSArray;


#import "MKArtworkDataSourceCache.h"

@interface MKTransitInfoLabelView : MKUILabel {
    CGFloat _maxWidth;
    CGFloat _spaceBetweenIcons;
    id *_textForTruncationGenerator;
    BOOL _hasCustomShieldSize;
    BOOL _hasCustomIconSize;
    BOOL _hasCustomFont;
}


@property (retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // ivar: _artworkCache
@property (nonatomic) NSInteger iconSize; // ivar: _iconSize
@property (copy, nonatomic) NSArray *labelItems; // ivar: _labelItems
@property (nonatomic) CGFloat maxShieldHeight; // ivar: _maxShieldHeight
@property (nonatomic) NSInteger shieldSize; // ivar: _shieldSize
@property (nonatomic) CGFloat spaceBetweenShields; // ivar: _spaceBetweenShields


+(NSInteger)iconSizeForContentSizeCategory:(id)arg0 ;
+(NSInteger)shieldSizeForContentSizeCategory:(id)arg0 ;
+(id)stringAttributesForFont:(id)arg0 lineBreakMode:(NSInteger)arg1 ;
-(id)_generateText;
-(id)_imageForArtworkDataSource:(id)arg0 ;
-(id)_imageForLabelItem:(id)arg0 ;
-(id)_imageForShieldDataSource:(id)arg0 ;
-(id)_stringAttributes;
-(id)init;
-(id)initWithLabelItems:(id)arg0 iconSize:(NSInteger)arg1 shieldSize:(NSInteger)arg2 spaceBetweenShields:(CGFloat)arg3 maxWidth:(CGFloat)arg4 ;
-(id)initWithMapItem:(id)arg0 ;
-(id)initWithMapItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_setFont:(id)arg0 custom:(BOOL)arg1 ;
-(void)_setupLabelInfo;
-(void)dealloc;
-(void)setFont:(id)arg0 ;
-(void)setMapItem:(id)arg0 ;
-(void)setMaxWidth:(CGFloat)arg0 textForTruncationGenerator:(id)arg1 ;
-(void)setSpaceBetweenIcons:(CGFloat)arg0 ;


@end


#endif