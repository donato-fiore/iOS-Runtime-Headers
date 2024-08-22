// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUITWOBUTTONFOOTERVIEW_H
#define SIRIUITWOBUTTONFOOTERVIEW_H



#import "SiriUIReusableFooterView.h"
#import "SiriUIKeyline.h"
#import "SiriUIContentButton.h"

@interface SiriUITwoButtonFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
    SiriUIKeyline *_horizontalKeyline;
}


@property (readonly, nonatomic) SiriUIContentButton *leftButton; // ivar: _leftButton
@property (readonly, nonatomic) SiriUIContentButton *rightButton; // ivar: _rightButton


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif