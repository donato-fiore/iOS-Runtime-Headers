// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AIRPLAYREMOTESLIDESHOW_H
#define AIRPLAYREMOTESLIDESHOW_H

@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;

#import <Foundation/Foundation.h>

#import "MediaControlClient.h"

@interface AirPlayRemoteSlideshow : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    NSObject<OS_dispatch_queue> *_userQueue;
    BOOL _started;
    CGFloat _startTime;
}


@property (nonatomic) NSObject<AirPlayRemoteSlideshowDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_configureEventHandler;
-(void)dealloc;
-(void)getFeaturesWithCompletion:(id)arg0 ;
-(void)getFeaturesWithOptions:(unsigned int)arg0 completion:(id)arg1 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setHost:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)stopWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif