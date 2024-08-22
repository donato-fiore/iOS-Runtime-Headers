// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUSERVER_H
#define CUSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUServer : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *acceptHandler; // ivar: _acceptHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)description;
-(id)init;
-(void)_invalidated;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif