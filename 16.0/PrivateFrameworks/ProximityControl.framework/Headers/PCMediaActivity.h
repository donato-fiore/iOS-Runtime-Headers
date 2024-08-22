// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCMEDIAACTIVITY_H
#define PCMEDIAACTIVITY_H

@class NSUserActivity;
@protocol PCActivity;



@interface PCMediaActivity : NSUserActivity <PCActivity>





+(id)titleForContentItem:(id)arg0 ;
+(id)userActivityInfoFor:(id)arg0 inContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(NSInteger)behavior;
-(NSInteger)direction;
-(NSInteger)mediaType;
-(NSUInteger)pcactivityType;
-(id)activityString;
-(id)artWork;
-(id)bundleIdentifier;
-(id)description;
-(id)image;
-(id)initWithActivity:(id)arg0 ;
-(id)initWithDisplayContext:(id)arg0 response:(id)arg1 ;
-(id)shortDescription;
-(unsigned int)playbackState;


@end


#endif