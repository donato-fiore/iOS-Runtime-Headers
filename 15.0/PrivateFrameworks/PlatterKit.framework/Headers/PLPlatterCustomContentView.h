// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPLATTERCUSTOMCONTENTVIEW_H
#define PLPLATTERCUSTOMCONTENTVIEW_H

@class UIView;


#import "PLPlatterView.h"

@interface PLPlatterCustomContentView : UIView {
    PLPlatterView *_ancestorPlatterView;
}




-(id)initWithAncestorPlatterView:(id)arg0 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif