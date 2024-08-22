// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPKTIPCONTENTHINTVIEW_H
#define TPKTIPCONTENTHINTVIEW_H



#import "TPKContentView.h"

@interface TPKTipContentHintView : TPKContentView {
    ? bottomSeparatorView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentController:(id)arg0 tipContent:(id)arg1 ;
-(id)initWithController:(id)arg0 content:(id)arg1 ;
-(id)initWithReusableTipView:(id)arg0 ;
-(void)bottomSeperatorNeedsUpdate;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)resetHostingView;
-(void)updateContentBackgroundColor:(id)arg0 ;


@end


#endif