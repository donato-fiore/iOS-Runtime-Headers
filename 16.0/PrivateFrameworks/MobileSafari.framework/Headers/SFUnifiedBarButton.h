// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNIFIEDBARBUTTON_H
#define SFUNIFIEDBARBUTTON_H

@class NSString, NSAttributedString, UIImage;


#import "SFUnifiedBarItem.h"
#import "SFUnifiedBarButtonView.h"

@interface SFUnifiedBarButton : SFUnifiedBarItem {
    SFUnifiedBarButtonView *_buttonView;
}


@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (copy, nonatomic) id *action; // ivar: _action
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;


-(id)initWithImage:(id)arg0 action:(id)arg1 ;
-(id)view;
-(void)_performAction;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif