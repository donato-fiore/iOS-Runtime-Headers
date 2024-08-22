// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDACTIVITYCONTROLLERMOCK_H
#define TIKEYBOARDACTIVITYCONTROLLERMOCK_H

@class NSString;
@protocol TIKeyboardActivityControlling;

#import <Foundation/Foundation.h>


@interface TIKeyboardActivityControllerMock : NSObject <TIKeyboardActivityControlling>



@property (readonly, nonatomic) NSUInteger activityState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addActivityObserver:(id)arg0 ;
-(void)removeActivityObserver:(id)arg0 ;


@end


#endif