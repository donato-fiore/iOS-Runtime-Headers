// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARTETHERINGITEMVIEW_H
#define UISTATUSBARTETHERINGITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarTetheringItemView : UIStatusBarItemView {
    int _tetheringConnectionCount;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(id)contentsImage;


@end


#endif