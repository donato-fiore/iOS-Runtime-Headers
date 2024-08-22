// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYCALLTOACTIONSHELFVIEW_H
#define PKDISCOVERYCALLTOACTIONSHELFVIEW_H

@class PKDiscoveryCallToActionShelf, PKDiscoveryCallToAction, PKDiscoveryMedia, UILabel, UIImageView, NSString;
@protocol PKLinkedApplicationObserver, PKDiscoveryCardViewDelegate;


#import "PKDiscoveryShelfView.h"
#import "PKLinkedApplication.h"
#import "PKContinuousButton.h"

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView <PKLinkedApplicationObserver>

 {
    PKDiscoveryCallToActionShelf *_ctaShelf;
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    PKLinkedApplication *_linkedApplication;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    CGSize _iconSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDiscoveryCardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showActivityIndicator; // ivar: _showActivityIndicator
@property (readonly) Class superclass;


-(CGFloat)_leadingEditorialTextSpace;
-(CGFloat)_leadingTitleSpace;
-(id)initWithShelf:(id)arg0 ;
-(struct CGSize )_iconSize;
-(struct CGSize )_sizeForMedia;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)linkedApplicationDidChangeState:(id)arg0 ;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif