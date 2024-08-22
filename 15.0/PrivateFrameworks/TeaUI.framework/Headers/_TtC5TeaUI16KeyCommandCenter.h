// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC5TEAUI16KEYCOMMANDCENTER_H
#define _TTC5TEAUI16KEYCOMMANDCENTER_H

@class UIResponder;



@interface _TtC5TeaUI16KeyCommandCenter : UIResponder {
    ? commandCenter;
    ? commandItems;
    ? stagedTracker;
}




-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)init;
-(void)handleKeyCommandWithSender:(id)arg0 ;


@end


#endif