// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSASSERTIONACQUISITIONOBSERVER_H
#define BLSASSERTIONACQUISITIONOBSERVER_H

@class NSString;
@protocol BLSAssertionObserving;

#import <Foundation/Foundation.h>


@interface BLSAssertionAcquisitionObserver : NSObject <BLSAssertionObserving>

 {
    os_unfair_lock_s _lock;
    id *_lock_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)observerWithCompletion:(id)arg0 ;
-(void)assertion:(id)arg0 didFailToAcquireWithError:(id)arg1 ;
-(void)assertionWasAcquired:(id)arg0 ;


@end


#endif