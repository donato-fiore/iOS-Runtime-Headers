// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAINVITEINPERSONACTIVITY_H
#define FAINVITEINPERSONACTIVITY_H

@class UIActivity, UIViewController, NSDictionary;



@interface FAInviteInPersonActivity : UIActivity

@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSDictionary *response; // ivar: _response


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(NSInteger)activityCategory;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)init;
-(void)_handleRUIDismiss:(id)arg0 ;
-(void)_notifyCompletionWithSuccess:(BOOL)arg0 userInfo:(id)arg1 ;
-(void)dealloc;
-(void)performActivity;


@end


#endif