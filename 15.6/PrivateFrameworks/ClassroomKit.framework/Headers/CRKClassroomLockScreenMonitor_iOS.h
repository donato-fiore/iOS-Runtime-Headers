// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCLASSROOMLOCKSCREENMONITOR_IOS_H
#define CRKCLASSROOMLOCKSCREENMONITOR_IOS_H

@class NSString;
@protocol CRKClassroomLockScreenMonitoring;

#import <Foundation/Foundation.h>


@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring>

 {
    int mDidAppearObserver;
    int mDidDismissObserver;
}


@property (nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible; // ivar: _classroomLockScreenVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)dismissClassroomLockScreen;
-(void)displayClassroomLockScreenWithLabel:(id)arg0 passcode:(id)arg1 ;
-(void)endObserving;
-(void)startObserving;


@end


#endif