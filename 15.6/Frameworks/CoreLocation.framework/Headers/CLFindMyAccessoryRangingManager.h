// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLFINDMYACCESSORYRANGINGMANAGER_H
#define CLFINDMYACCESSORYRANGINGMANAGER_H

@protocol OS_dispatch_queue, CLFindMyAccessoryRangingManagerDelegate;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryRangingManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> _connection;
}


@property (weak, nonatomic) NSObject<CLFindMyAccessoryRangingManagerDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)connectToDevice:(id)arg0 ;
-(void)disconnectFromDevice:(id)arg0 ;
-(void)fetchFirmwareVersionFromDevice:(id)arg0 ;
-(void)handleInterruption;
-(void)handleMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)initRoseWithParameters:(id)arg0 onDevice:(id)arg1 ;
-(void)prepareForStartRangingOnDevice:(id)arg0 ;
-(void)setRoseRangingParameters:(id)arg0 onDevice:(id)arg1 ;
-(void)startEventCounterOnDevice:(id)arg0 ;
-(void)startRangingWithParameters:(id)arg0 onDevice:(id)arg1 ;
-(void)stopEventCounterOnDevice:(id)arg0 ;
-(void)stopRangingOnDevice:(id)arg0 ;
-(void)stopRoseWithParameters:(id)arg0 onDevice:(id)arg1 ;


@end


#endif