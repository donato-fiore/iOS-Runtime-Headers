// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCANNOUNCEMENTACTIVITY_H
#define PCANNOUNCEMENTACTIVITY_H

@class NSUserActivity;
@protocol PCActivity;



@interface PCAnnouncementActivity : NSUserActivity <PCActivity>





-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)pcactivityType;
-(id)activityString;
-(id)bundleIdentifier;
-(id)description;
-(id)image;
-(id)init;
-(id)initWithActivity:(id)arg0 ;


@end


#endif