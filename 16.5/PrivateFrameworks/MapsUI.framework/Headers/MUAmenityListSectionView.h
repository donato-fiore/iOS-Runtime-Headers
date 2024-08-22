// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUAMENITYLISTSECTIONVIEW_H
#define MUAMENITYLISTSECTIONVIEW_H

@class UIButton, UIView;


#import "MUPlaceVerticalCardContainerView.h"
#import "MUAmenityListSectionConfiguration.h"

@interface MUAmenityListSectionView : MUPlaceVerticalCardContainerView {
    MUAmenityListSectionConfiguration *_configuration;
    UIButton *_moreButton;
    UIView *_applePayAmenityRowView;
    UIView *_applePayImageView;
}


@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded


-(id)initWithAmenityListConfiguration:(id)arg0 ;
-(void)_performExpansion;
-(void)_setupSubviews;


@end


#endif