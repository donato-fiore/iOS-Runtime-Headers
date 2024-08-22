// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPHIDGCSESSION_H
#define RPHIDGCSESSION_H

@class NSDictionary;
@protocol OS_dispatch_queue, RPMessageable;

#import <Foundation/Foundation.h>


@interface RPHIDGCSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_options;
}


@property (retain, nonatomic) NSObject<RPMessageable> *messenger; // ivar: _messenger


-(id)initWithOptions:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)sendGCEvent:(struct RPHIDGCEvent *)arg0 destinationID:(id)arg1 completion:(id)arg2 ;


@end


#endif