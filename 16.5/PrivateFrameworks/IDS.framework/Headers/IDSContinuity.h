// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCONTINUITY_H
#define IDSCONTINUITY_H


#import <Foundation/Foundation.h>

#import "_IDSContinuity.h"

@interface IDSContinuity : NSObject {
    _IDSContinuity *_internal;
}


@property (readonly) NSInteger state;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)connectToPeer:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromPeer:(id)arg0 ;
-(void)startAdvertisingOfType:(NSInteger)arg0 withData:(id)arg1 withOptions:(id)arg2 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 peers:(id)arg3 withOptions:(id)arg4 boostedScan:(BOOL)arg5 duplicates:(BOOL)arg6 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 withOptions:(id)arg3 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 withOptions:(id)arg3 boostedScan:(BOOL)arg4 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 mask:(id)arg2 withOptions:(id)arg3 boostedScan:(BOOL)arg4 duplicates:(BOOL)arg5 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 peers:(id)arg2 withOptions:(id)arg3 ;
-(void)startScanningForType:(NSInteger)arg0 withData:(id)arg1 withOptions:(id)arg2 ;
-(void)startTrackingPeer:(id)arg0 ;
-(void)startTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;
-(void)stopAdvertisingOfType:(NSInteger)arg0 ;
-(void)stopScanningForType:(NSInteger)arg0 ;
-(void)stopTrackingPeer:(id)arg0 ;
-(void)stopTrackingPeer:(id)arg0 forType:(NSInteger)arg1 ;


@end


#endif