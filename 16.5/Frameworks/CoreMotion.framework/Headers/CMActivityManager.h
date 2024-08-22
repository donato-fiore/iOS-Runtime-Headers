// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMACTIVITYMANAGER_H
#define CMACTIVITYMANAGER_H


#import <Foundation/Foundation.h>


@interface CMActivityManager : NSObject {
    id *_internal;
}


@property (readonly, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;
@property (copy) id *activityHandler;


-(NSInteger)overrideOscarSideband:(BOOL)arg0 withState:(NSInteger)arg1 ;
-(NSInteger)simulateMotionState:(BOOL)arg0 withState:(NSInteger)arg1 ;
-(NSInteger)simulateMotionStateYouthWithState:(NSInteger)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif