// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUILINKBUTTONFOOTERVIEW_H
#define ACUILINKBUTTONFOOTERVIEW_H

@class UIView;
@protocol PSHeaderFooterView;


#import "ACUILinkButton.h"

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView>

 {
    ACUILinkButton *_linkButton;
}


@property (nonatomic) NSInteger alignment; // ivar: _desiredTextAlignment


-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 ;
-(id)initWithButton:(id)arg0 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif