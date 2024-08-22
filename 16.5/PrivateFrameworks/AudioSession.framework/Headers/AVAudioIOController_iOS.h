// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOIOCONTROLLER_IOS_H
#define AVAUDIOIOCONTROLLER_IOS_H

@class NSString;
@protocol AVAudioIOController;

#import <Foundation/Foundation.h>


@interface AVAudioIOController_iOS : NSObject <AVAudioIOController>

 {
    optional<(anonymous namespace)::IOControllerImpl> impl;
}


@property (readonly, nonatomic) AVAudioIOPeriod IOPeriod;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVAudioTimeInterval dynamicLatency;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPresentationTime;
@property (nonatomic) unsigned int timingStateSlot;


-(NSInteger)createIOEventBlock:(id)arg0 ;
-(id)initWithSession:(id)arg0 xpcConnection:(struct shared_ptr<as::client::XPCConnection> )arg1 timingStateSlot:(unsigned int)arg2 isDecoupledInput:(BOOL)arg3 ;
-(struct AudioPresentationTimeStamp )presentationTime;
-(struct AudioTimeStamp )currentTime;
-(void)destroyIOEventBlock:(NSInteger)arg0 ;
-(void)privateDispatchIOControllerEvent:(NSUInteger)arg0 ;


@end


#endif