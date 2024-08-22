// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSMARTSIRIVOLUMECONTROLLER_H
#define CSSMARTSIRIVOLUMECONTROLLER_H

@class NSString;
@protocol CSSmartSiriVolumeClientDelegate, CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSmartSiriVolumeClient.h"

@interface CSSmartSiriVolumeController : NSObject <CSSmartSiriVolumeClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSSmartSiriVolumeControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CSSmartSiriVolumeClient *ssvClient; // ivar: _ssvClient
@property (readonly) Class superclass;


-(id)getVolumeForTTSType:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)_createSSVClientConnectionIfNeeded;
-(void)didSmartSiriVolumeChangeForReason:(NSUInteger)arg0 ;
-(void)setPermanentVolumeOffsetWithDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumeDirection:(BOOL)arg0 ;
-(void)setSmartSiriVolumePercentage:(float)arg0 ;


@end


#endif