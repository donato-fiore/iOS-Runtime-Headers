// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE23FBKACTIONMENUCONTROLLER_H
#define _TTC12FEEDBACKCORE23FBKACTIONMENUCONTROLLER_H

@protocol _TtP12FeedbackCore19FBKActionController_;

#import <Foundation/Foundation.h>


@interface _TtC12FeedbackCore23FBKActionMenuController : NSObject <_TtP12FeedbackCore19FBKActionController_>

 {
    ? actions;
    ? title;
    ? subtitle;
}




-(id)buildMenu;
-(id)init;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 actions:(id)arg2 ;
-(void)addAction:(id)arg0 ;
-(void)addActionWithTitle:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;
-(void)attachToBarButtonItem:(id)arg0 ;


@end


#endif