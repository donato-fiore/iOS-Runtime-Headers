// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPHIDTOUCHSESSION_H
#define RPHIDTOUCHSESSION_H

@class NSNumber;
@protocol OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPHIDTouchSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSNumber *_touchSessionID;
}


@property (nonatomic) unsigned int flags; // ivar: _flags
@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger
@property (nonatomic) CGSize screenSize; // ivar: _screenSize


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)sendTouchEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif