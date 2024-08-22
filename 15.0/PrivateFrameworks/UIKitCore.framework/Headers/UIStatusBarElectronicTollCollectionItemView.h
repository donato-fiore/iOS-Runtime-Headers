// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISTATUSBARELECTRONICTOLLCOLLECTIONITEMVIEW_H
#define UISTATUSBARELECTRONICTOLLCOLLECTIONITEMVIEW_H



#import "UIStatusBarItemView.h"

@interface UIStatusBarElectronicTollCollectionItemView : UIStatusBarItemView {
    BOOL _available;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)alphaForAvailable:(BOOL)arg0 ;
-(id)contentsImage;
-(void)setVisible:(BOOL)arg0 ;


@end


#endif