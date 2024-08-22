// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISTATUSBARCARPLAYTIMEITEMVIEW_H
#define UISTATUSBARCARPLAYTIMEITEMVIEW_H

@class NSString;


#import "UIStatusBarButtonActionItemView.h"

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    NSString *_timeString;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)extraLeftPadding;
-(CGFloat)extraRightPadding;
-(CGFloat)neededSizeForImageSet:(id)arg0 ;
-(NSInteger)textStyle;
-(id)_timeImageSet;
-(id)_timeImageSetForColor:(id)arg0 ;
-(id)contentsImage;


@end


#endif