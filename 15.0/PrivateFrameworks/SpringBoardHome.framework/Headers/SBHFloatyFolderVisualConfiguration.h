// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHFLOATYFOLDERVISUALCONFIGURATION_H
#define SBHFLOATYFOLDERVISUALCONFIGURATION_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHFloatyFolderVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>



@property (nonatomic) CGSize contentBackgroundSize; // ivar: _contentBackgroundSize
@property (nonatomic) CGFloat continuousCornerRadius; // ivar: _continuousCornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat pageControlAreaHeight; // ivar: _pageControlAreaHeight
@property (nonatomic) CGSize pageControlCustomPadding; // ivar: _pageControlCustomPadding
@property (nonatomic) CGFloat rubberBandIntervalForOverscroll; // ivar: _rubberBandIntervalForOverscroll
@property (readonly) Class superclass;
@property (nonatomic) CGFloat titleFontSizeInLandscape; // ivar: _titleFontSizeInLandscape
@property (nonatomic) CGFloat titleFontSizeInPortrait; // ivar: _titleFontSizeInPortrait
@property (nonatomic) CGFloat titleHorizontalInset; // ivar: _titleHorizontalInset


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)setTitleFontSizeInAllOrientations:(CGFloat)arg0 ;


@end


#endif