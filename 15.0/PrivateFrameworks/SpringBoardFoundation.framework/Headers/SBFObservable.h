// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFOBSERVABLE_H
#define SBFOBSERVABLE_H

@class NSString;
@protocol SBFObservable;

#import <Foundation/Foundation.h>


@interface SBFObservable : NSObject <SBFObservable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)forkJoin:(id)arg0 ;
+(id)observableWithBlock:(id)arg0 ;
-(id)generate:(id)arg0 ;
-(id)map:(id)arg0 ;
-(id)observeOn:(id)arg0 ;
-(id)subscribe:(id)arg0 ;
-(id)subscribeOn:(id)arg0 ;
-(id)subscribeWithResultBlock:(id)arg0 ;
// -(id)subscribeWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
-(id)throttle:(CGFloat)arg0 onScheduler:(id)arg1 ;
-(id)waitForResults:(*id)arg0 ;


@end


#endif