// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKUGCCALLTOACTIONVIEW_H
#define MKUGCCALLTOACTIONVIEW_H

@class UIView, NSArray, UILabel, NSString;
@protocol UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving, MKUGCCallToActionViewDelegate;


#import "MKPlaceSectionRowView.h"
#import "MKUGCCallToActionViewAppearance.h"

@interface MKUGCCallToActionView : MKPlaceSectionRowView <UGCCallToActionEditAccessoryViewDelegate, MKActivityObserving>

 {
    UIView *_accessoryButtonContainerView;
    UIView *_currentAccessoryView;
    NSArray *_constraints;
    UILabel *_callToActionLabel;
    CGFloat _verticalSpacing;
}


@property (readonly, nonatomic) NSString *analyticValue;
@property (readonly, nonatomic) UIView *anchoringView;
@property (readonly, nonatomic) MKUGCCallToActionViewAppearance *appearance; // ivar: _appearance
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKUGCCallToActionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger presentationContext; // ivar: _presentationContext
@property (readonly) Class superclass;


-(id)initWithAppearance:(id)arg0 ;
-(id)initWithAppearance:(id)arg0 verticalSpacing:(CGFloat)arg1 ;
-(void)_addPhotosButtonPressed;
-(void)_contentSizeChanged;
-(void)_dislikeButtonPressed;
-(void)_invalidateLayout;
-(void)_likeButtonPressed;
-(void)_setupConstraints;
-(void)_setupSubviews;
-(void)_updateAccessoryView:(BOOL)arg0 ;
-(void)beginAnimatingActivityIndicator;
-(void)callToActionEditAccessoryViewTapped:(id)arg0 ;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;


@end


#endif