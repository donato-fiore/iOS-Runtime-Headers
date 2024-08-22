// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ASINCOMINGCALLOBSERVER_H
#define _ASINCOMINGCALLOBSERVER_H

@class CXCallObserver, NSString;
@protocol CXCallObserverDelegate;

#import <Foundation/Foundation.h>


@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate>

 {
    CXCallObserver *_callObserver;
    id *_incomingCallHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)callObserverWithBlock:(id)arg0 ;
-(id)_initWithBlock:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;


@end


#endif