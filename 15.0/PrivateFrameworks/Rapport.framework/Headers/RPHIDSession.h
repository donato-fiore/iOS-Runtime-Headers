// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPHIDSESSION_H
#define RPHIDSESSION_H

@protocol OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPHIDSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger


-(id)init;
-(void)activateWithCompletion:(id)arg0 ;
-(void)hidCommand:(int)arg0 buttonState:(int)arg1 destinationID:(id)arg2 completion:(id)arg3 ;
-(void)hidCommand:(int)arg0 destinationID:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;


@end


#endif