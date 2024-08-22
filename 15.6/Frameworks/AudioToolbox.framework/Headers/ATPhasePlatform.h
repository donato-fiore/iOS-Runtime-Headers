// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATPHASEPLATFORM_H
#define ATPHASEPLATFORM_H

@class NSString;
@protocol PHASEPlatform, PHASESessionInterface;

#import <Foundation/Foundation.h>


@interface ATPhasePlatform : NSObject <PHASEPlatform>

 {
    unique_ptr<Phase::ServerManager, std::default_delete<Phase::ServerManager>> _serverManager;
    id *_sessionInterface;
}


@property (readonly, nonatomic) unsigned int bufferFrameSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) CGFloat sampleRate;
@property (readonly, nonatomic) NSObject<PHASESessionInterface> *sessionInterface;
@property (readonly) Class superclass;


-(*void)lazyInitServerManager;
-(BOOL)enableIO:(BOOL)arg0 direction:(unsigned char)arg1 ;
-(BOOL)registerIOBlock:(id)arg0 ;
-(BOOL)registerOverloadNotification:(id)arg0 ;
-(BOOL)registerRouteChangeNotification:(id)arg0 ;
-(BOOL)start;
-(BOOL)stop;
-(id)init;
-(id)lazyInitSessionInterface;
-(id)streamInfoForIndex:(unsigned int)arg0 direction:(unsigned char)arg1 ;
-(unsigned int)deviceLatencyInFramesForDirection:(unsigned char)arg0 ;
-(unsigned int)numberOfStreamsForDirection:(unsigned char)arg0 ;
-(void)dealloc;


@end


#endif