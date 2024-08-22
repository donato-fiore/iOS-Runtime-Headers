// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTRACKERMANIPULATORCOORDINATOR_H
#define TSDTRACKERMANIPULATORCOORDINATOR_H

@class NSMutableSet;
@protocol TSDTrackerManipulator;

#import <Foundation/Foundation.h>


@interface TSDTrackerManipulatorCoordinator : NSObject {
    NSMutableSet *mRegisteredTMs;
}


@property (readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM; // ivar: mControllingTM


+(void)p_dynamicallySubclassGRForNotification:(id)arg0 ;
+(void)p_removeDynamicSubclass:(id)arg0 ;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg0 ;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg0 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)operationDidEnd;
-(void)operationWillEnd;
-(void)p_notifyControlChange;
-(void)registerTrackerManipulator:(id)arg0 ;
-(void)unregisterTrackerManipulator:(id)arg0 ;


@end


#endif