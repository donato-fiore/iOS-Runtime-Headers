// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOUTSIDEVIEWTAPDETECTOR_H
#define HKOUTSIDEVIEWTAPDETECTOR_H

@class NSString, NSMutableArray;
@protocol UIGestureRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface HKOutsideViewTapDetector : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *windowCallbacks; // ivar: _windowCallbacks


+(id)_detectorSingleton;
+(void)addOutsideTouchCallbackForView:(id)arg0 outsideTapBlock:(id)arg1 ;
+(void)removeOutsideTouchCallbackForView:(id)arg0 ;
-(id)_callbacksForWindow:(id)arg0 ;
-(id)init;
-(void)_removeCallbacksForView:(id)arg0 ;


@end


#endif