// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONITEMASSETPREVIEWVIEW_H
#define PXCONTENTSYNDICATIONITEMASSETPREVIEWVIEW_H

@class UIView, NSArray, NSAttributedString;


#import "PXFocusInfo.h"
#import "PXRegionOfInterest.h"

@interface PXContentSyndicationItemAssetPreviewView : UIView

@property (readonly, nonatomic) PXFocusInfo *focusInfo;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) NSArray *imageViews; // ivar: _imageViews
@property (readonly) NSInteger maximumPreviewCount;
@property (copy, nonatomic) NSAttributedString *overlayTitle; // ivar: _overlayTitle
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (nonatomic) NSInteger visiblePreviewCount; // ivar: _visiblePreviewCount


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setPreviewImage:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif