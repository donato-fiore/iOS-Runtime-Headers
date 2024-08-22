// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSTACKBUBBLEVIEW_H
#define PXCMMSTACKBUBBLEVIEW_H

@class UIView, UIActivityIndicatorView, NSString, PHMomentShare;
@protocol PXAssetsDataSourceManagerObserver;


#import "PXMessagesStackView.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXCMMStackBubbleView : UIView <PXAssetsDataSourceManagerObserver>

 {
    PXMessagesStackView *_stackView;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (readonly, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly) Class superclass;


+(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateSubviews;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif