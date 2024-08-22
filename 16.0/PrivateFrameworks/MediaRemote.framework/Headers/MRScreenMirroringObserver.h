// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRSCREENMIRRORINGOBSERVER_H
#define MRSCREENMIRRORINGOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MRScreenMirroringObserver : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (nonatomic) NSInteger deviceCount; // ivar: _deviceCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)UIControllingObserver;
+(id)observerWithStateChangeCallback:(id)arg0 ;
-(id)initWithStateChangeCallback:(id)arg0 ;
-(void)_contextChangeNotification:(id)arg0 ;
-(void)_init;
-(void)_notifyIfNeeded;


@end


#endif