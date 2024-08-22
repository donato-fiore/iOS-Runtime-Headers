// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SOTIMERMUTATION_H
#define _SOTIMERMUTATION_H

@class NSUUID, NSURL, NSString, NSDate;
@protocol SOTimerMutating;

#import <Foundation/Foundation.h>

#import "SOTimer.h"

@interface _SOTimerMutation : NSObject <SOTimerMutating>

 {
    SOTimer *_base;
    NSUUID *_timerID;
    NSURL *_timerURL;
    BOOL _isFiring;
    NSString *_title;
    NSInteger _state;
    CGFloat _duration;
    NSInteger _type;
    CGFloat _fireTimeInterval;
    NSDate *_fireDate;
    NSDate *_firedDate;
    NSDate *_dismissedDate;
    NSDate *_lastModifiedDate;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsFiring;
-(BOOL)isDirty;
-(CGFloat)getDuration;
-(CGFloat)getFireTimeInterval;
-(NSInteger)getState;
-(NSInteger)getType;
-(id)getDismissedDate;
-(id)getFireDate;
-(id)getFiredDate;
-(id)getLastModifiedDate;
-(id)getTimerID;
-(id)getTimerURL;
-(id)getTitle;
-(id)initWithBase:(id)arg0 ;
-(void)setDismissedDate:(id)arg0 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)setFireDate:(id)arg0 ;
-(void)setFireTimeInterval:(CGFloat)arg0 ;
-(void)setFiredDate:(id)arg0 ;
-(void)setIsFiring:(BOOL)arg0 ;
-(void)setLastModifiedDate:(id)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)setTimerID:(id)arg0 ;
-(void)setTimerURL:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setType:(NSInteger)arg0 ;


@end


#endif