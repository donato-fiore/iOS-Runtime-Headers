// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARRETURNTOCALLITEMVIEW_H
#define UISTATUSBARRETURNTOCALLITEMVIEW_H



#import "UIStatusBarAppIconItemView.h"
#import "UILabel.h"

@interface UIStatusBarReturnToCallItemView : UIStatusBarAppIconItemView {
    UILabel *_textLabel;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)neededSizeForImageSet:(id)arg0 ;
-(NSInteger)buttonType;
-(id)_appBundleIdentifier;
-(void)layoutSubviews;


@end


#endif