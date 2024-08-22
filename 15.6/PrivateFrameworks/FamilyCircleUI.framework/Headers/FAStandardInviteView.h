// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FASTANDARDINVITEVIEW_H
#define FASTANDARDINVITEVIEW_H

@class UIView, UILabel, UIImageView, NSString;
@protocol FAInviteViewProtocol;


#import "FAFamilySharingFeaturesView.h"

@interface FAStandardInviteView : UIView <FAInviteViewProtocol>

 {
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_inviteHeaderLabel;
    FAFamilySharingFeaturesView *_featuresView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_heightForText:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)_heightForTitle:(id)arg0 width:(CGFloat)arg1 ;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(id)_labelWithCenteredText:(id)arg0 ;
-(id)initWithInvite:(id)arg0 hideLocationSharing:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif