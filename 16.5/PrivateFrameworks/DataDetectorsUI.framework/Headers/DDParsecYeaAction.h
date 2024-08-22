// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDPARSECYEAACTION_H
#define DDPARSECYEAACTION_H



#import "DDParsecAction.h"

@interface DDParsecYeaAction : DDParsecAction



-(BOOL)hasUserInterface;
-(NSUInteger)relevancy;
-(id)createViewController;
-(id)feedbackListener;
-(id)localizedName;
-(void)performFromView:(id)arg0 ;
-(void)prepareViewControllerForActionController:(id)arg0 ;
-(void)report;


@end


#endif