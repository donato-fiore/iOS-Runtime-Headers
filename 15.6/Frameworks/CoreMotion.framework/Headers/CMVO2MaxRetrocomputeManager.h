// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMVO2MAXRETROCOMPUTEMANAGER_H
#define CMVO2MAXRETROCOMPUTEMANAGER_H

@protocol OS_dispatch_queue, CMVO2MaxRetrocomputeDelegate;

#import <Foundation/Foundation.h>


@interface CMVO2MaxRetrocomputeManager : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fStartedUpdates;
}


@property (weak, nonatomic) NSObject<CMVO2MaxRetrocomputeDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)retrocomputeStateWithHandler:(id)arg0 ;
-(void)retrocomputeStatusWithHandler:(id)arg0 ;
-(void)startRetrocomputeStatusUpdates;
-(void)stopRetrocomputeStatusUpdates;
-(void)triggerRetrocomputeWithHandler:(id)arg0 ;


@end


#endif