// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTOASTPLACARDVIEW_H
#define PXTOASTPLACARDVIEW_H

@class UIView, NSMutableArray, NSString;



@interface PXToastPlacardView : UIView {
    BOOL _didLoad;
    NSMutableArray *_actions;
}


@property (copy, nonatomic) NSString *message; // ivar: _message


-(void)addActionWithTitle:(id)arg0 action:(id)arg1 ;
-(void)didMoveToSuperview;


@end


#endif