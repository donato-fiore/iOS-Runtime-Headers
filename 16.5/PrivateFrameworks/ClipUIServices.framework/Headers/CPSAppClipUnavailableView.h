// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSAPPCLIPUNAVAILABLEVIEW_H
#define CPSAPPCLIPUNAVAILABLEVIEW_H

@class UIView, NSString;


#import "CPSVibrantLabel.h"
#import "CPSButton.h"

@interface CPSAppClipUnavailableView : UIView {
    CPSVibrantLabel *_reasonLabel;
    CPSButton *_fallbackOpenButton;
    id *_fallbackURLAction;
}


@property (nonatomic) NSString *reasonString;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_openButtonTapped:(id)arg0 ;
-(void)_setUpViews;
-(void)enableURLFallbackWithAction:(id)arg0 ;


@end


#endif