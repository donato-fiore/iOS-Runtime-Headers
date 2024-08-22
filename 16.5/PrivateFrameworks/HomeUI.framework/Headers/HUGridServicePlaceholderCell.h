// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUGRIDSERVICEPLACEHOLDERCELL_H
#define HUGRIDSERVICEPLACEHOLDERCELL_H

@class UIVisualEffectView, UIActivityIndicatorView, UILabel;


#import "HUGridServiceCell.h"
#import "HUGridServiceCellTextView.h"
#import "HUIconView.h"

@interface HUGridServicePlaceholderCell : HUGridServiceCell {
    BOOL _shouldShowRoomName;
    BOOL _showingUpdatingState;
    HUGridServiceCellTextView *_serviceTextView;
    UIVisualEffectView *_descriptionLabelEffectView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_coloredDescriptionLabel;
    HUIconView *_iconView;
}




-(BOOL)shouldShowRoomName;
-(BOOL)showingUpdatingState;
-(NSUInteger)iconDisplayStyle;
-(id)_textConfiguration;
-(id)activityIndicator;
-(id)coloredDescriptionLabel;
-(id)descriptionLabelEffectView;
-(id)iconView;
-(id)serviceTextView;
-(void)_setupServiceCell;
-(void)_updateSecondaryContentDisplayStyle;
-(void)displayStyleDidChange;
-(void)layoutSubviews;
-(void)setActivityIndicator:(id)arg0 ;
-(void)setColoredDescriptionLabel:(id)arg0 ;
-(void)setDescriptionLabelEffectView:(id)arg0 ;
-(void)setIconView:(id)arg0 ;
-(void)setServiceTextView:(id)arg0 ;
-(void)setShouldShowRoomName:(BOOL)arg0 ;
-(void)setShowingUpdatingState:(BOOL)arg0 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif