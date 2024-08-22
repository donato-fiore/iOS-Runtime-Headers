// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNEDITINAPPACTION_H
#define CNEDITINAPPACTION_H

@class CNUIUserActivityManager;


#import "CNContactAction.h"

@interface CNEditInAppAction : CNContactAction

@property (readonly, nonatomic) CNUIUserActivityManager *activityManager; // ivar: _activityManager


-(id)initWithContact:(id)arg0 activityManager:(id)arg1 ;
-(id)title;
-(void)performActionWithSender:(id)arg0 ;


@end


#endif