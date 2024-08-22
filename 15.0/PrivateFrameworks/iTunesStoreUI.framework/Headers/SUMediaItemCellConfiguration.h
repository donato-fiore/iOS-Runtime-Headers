// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUMEDIAITEMCELLCONFIGURATION_H
#define SUMEDIAITEMCELLCONFIGURATION_H



#import "SUItemCellConfiguration.h"

@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (readonly, nonatomic) CGSize artworkSize;
@property (readonly, nonatomic) NSInteger mediaIconType;
@property (readonly, nonatomic) BOOL showContentRating;


+(id)copyDefaultContext;
-(CGFloat)alphaForImageAtIndex:(NSUInteger)arg0 fromAlpha:(*CGFloat)arg1 withModifiers:(NSUInteger)arg2 ;
-(CGFloat)alphaForLabelAtIndex:(NSUInteger)arg0 fromAlpha:(*CGFloat)arg1 withModifiers:(NSUInteger)arg2 ;
-(id)copyImageDataProvider;
-(id)fontForLabelAtIndex:(NSUInteger)arg0 ;
-(id)initWithStringCount:(NSUInteger)arg0 imageCount:(NSUInteger)arg1 ;
-(struct UIEdgeInsets )_ratingBorderInsets;
-(void)drawWithModifiers:(NSUInteger)arg0 ;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)reloadStrings;


@end


#endif