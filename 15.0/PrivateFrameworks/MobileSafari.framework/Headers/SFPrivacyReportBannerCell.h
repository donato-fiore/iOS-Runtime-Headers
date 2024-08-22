// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPRIVACYREPORTBANNERCELL_H
#define SFPRIVACYREPORTBANNERCELL_H

@class UICollectionViewCell, UILabel, UIVisualEffectView, UIButton, UILayoutGuide, NSString;
@protocol UITextViewDelegate;



@interface SFPrivacyReportBannerCell : UICollectionViewCell <UITextViewDelegate>

 {
    UILabel *_numberOfTrackersLabel;
    UILabel *_captionLabel;
    UIVisualEffectView *_backgroundEffectView;
    NSUInteger _action;
    UIButton *_actionButton;
    UILayoutGuide *_textLayoutGuide;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger numberOfTrackers; // ivar: _numberOfTrackers
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_actionButtonTapped:(id)arg0 ;
-(void)_privacyProxyAvailabilityChanged:(id)arg0 ;
-(void)_removeActionButton;
-(void)_setAction:(NSUInteger)arg0 text:(id)arg1 ;
-(void)_updateState;
-(void)_updateVibrancy;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif