// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPCOLLABORATIONHANDLEVIEW_H
#define LPCOLLABORATIONHANDLEVIEW_H

@class UIView, UILabel;


#import "LPComponentView.h"

@interface LPCollaborationHandleView : LPComponentView {
    UIView *_separator;
    UILabel *_label;
}




-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 collaborationHandle:(id)arg1 style:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif