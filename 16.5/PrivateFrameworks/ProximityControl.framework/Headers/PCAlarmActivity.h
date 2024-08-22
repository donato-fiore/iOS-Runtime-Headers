// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCALARMACTIVITY_H
#define PCALARMACTIVITY_H

@class NSUserActivity;
@protocol PCActivity;



@interface PCAlarmActivity : NSUserActivity <PCActivity>





-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)pcactivityType;
-(id)activityString;
-(id)bundleIdentifier;
-(id)description;
-(id)fireDate;
-(id)image;
-(id)initFromAlarm:(id)arg0 ;
-(id)initWithActivity:(id)arg0 ;
-(id)title;


@end


#endif