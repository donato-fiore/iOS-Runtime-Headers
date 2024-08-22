// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCTIMERACTIVITY_H
#define PCTIMERACTIVITY_H

@class NSUserActivity;
@protocol PCActivity;



@interface PCTimerActivity : NSUserActivity <PCActivity>





-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(CGFloat)timeLeft;
-(NSUInteger)pcactivityType;
-(id)activityString;
-(id)bundleIdentifier;
-(id)description;
-(id)displayTitle;
-(id)fireDate;
-(id)image;
-(id)initFromTimer:(id)arg0 ;
-(id)initWithActivity:(id)arg0 ;


@end


#endif