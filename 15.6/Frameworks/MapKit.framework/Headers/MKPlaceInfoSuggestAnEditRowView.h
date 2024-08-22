// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEINFOSUGGESTANEDITROWVIEW_H
#define MKPLACEINFOSUGGESTANEDITROWVIEW_H

@class NSLayoutConstraint;


#import "MKPlaceSectionRowView.h"
#import "_MKRightImageButton.h"

@interface MKPlaceInfoSuggestAnEditRowView : MKPlaceSectionRowView {
    _MKRightImageButton *_suggestAnEditButton;
    NSLayoutConstraint *_topToTitleVerticalConstraint;
    NSLayoutConstraint *_titleToBottomVerticalConstraint;
}


@property (copy, nonatomic) id *selectionBlock; // ivar: _selectionBlock


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupSubviews;
-(void)_suggestAnEditButtonPressed;
-(void)_updateConstraints;
-(void)_updateFonts;


@end


#endif