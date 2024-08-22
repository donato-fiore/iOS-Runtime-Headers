// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFHOSTAPPLICATIONCUSTOMACTIVITY_H
#define SFHOSTAPPLICATIONCUSTOMACTIVITY_H

@class SFActivity;


#import "SFCustomActivityProxy.h"

@interface SFHostApplicationCustomActivity : SFActivity

@property (readonly, nonatomic) SFCustomActivityProxy *activityProxy; // ivar: _activityProxy


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithActivityProxy:(id)arg0 ;


@end


#endif