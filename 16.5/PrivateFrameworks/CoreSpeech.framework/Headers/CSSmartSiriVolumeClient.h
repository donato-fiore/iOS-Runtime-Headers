// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSMARTSIRIVOLUMECLIENT_H
#define CSSMARTSIRIVOLUMECLIENT_H

@class NSXPCConnection;
@protocol CSSmartSiriVolumeServiceDelegate, CSSmartSiriVolumeClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSmartSiriVolumeClient : NSObject <CSSmartSiriVolumeServiceDelegate>



@property (weak, nonatomic) NSObject<CSSmartSiriVolumeClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSXPCConnection *ssvConnection; // ivar: _ssvConnection


-(id)_getRemoteServiceProxyObject;
-(id)getVolumeForTTSType:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)_createClientConnection;
-(void)dealloc;
-(void)didTTSVolumeChangeForReason:(NSUInteger)arg0 ;
-(void)setPermanentVolumeOffsetWithDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumeDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumePercentage:(float)arg0 ;


@end


#endif