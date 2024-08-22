// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTIVITYPLUS_H
#define ACTIVITYPLUS_H

@class UIActivity, NSString, UIImage;



@interface ActivityPlus : UIActivity {
    NSString *_activityType;
    NSString *_activityTitle;
    UIImage *_activityImage;
    id *_actionHandler;
}




-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithTitle:(id)arg0 image:(id)arg1 type:(id)arg2 handler:(id)arg3 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif