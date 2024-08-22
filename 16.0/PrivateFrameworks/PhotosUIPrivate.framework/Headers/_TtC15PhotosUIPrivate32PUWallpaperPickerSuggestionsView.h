// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15PHOTOSUIPRIVATE32PUWALLPAPERPICKERSUGGESTIONSVIEW_H
#define _TTC15PHOTOSUIPRIVATE32PUWALLPAPERPICKERSUGGESTIONSVIEW_H

@class UIView, PXWallpaperPickerDataSource;
@protocol _TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_;



@interface _TtC15PhotosUIPrivate32PUWallpaperPickerSuggestionsView : UIView {
    ? scrollView;
    ? stackView;
    ? needsRTLInitialOffsetCorrection;
    ? contentWidthConstraint;
    ? contentHeightObservation;
    ? reloadQueue;
}


@property (nonatomic, retain) PXWallpaperPickerDataSource *dataSource; // ivar: dataSource
@property (nonatomic, weak) NSObject<_TtP15PhotosUIPrivate40PUWallpaperPickerSuggestionsViewDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic) CGFloat preferredViewHeight; // ivar: preferredViewHeight


+(CGFloat)verticalMargin;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif