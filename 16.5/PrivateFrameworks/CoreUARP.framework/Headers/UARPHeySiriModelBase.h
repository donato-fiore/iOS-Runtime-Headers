// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPHEYSIRIMODELBASE_H
#define UARPHEYSIRIMODELBASE_H

@class NSURL, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue, UARPHeySiriModelDelegateProtocol;

#import <Foundation/Foundation.h>

#import "UARPController.h"
#import "UARPSuperBinaryAsset.h"
#import "UARPAccessory.h"

@interface UARPHeySiriModelBase : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    UARPController *_controller;
    UARPSuperBinaryAsset *_superbinary;
    NSUInteger _majorVersion;
    NSUInteger _minorVersion;
    NSUInteger _uarpProtocolVersion;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preinstalledModels;
}


@property (readonly) UARPAccessory *accessory; // ivar: _accessory
@property (weak) NSObject<UARPHeySiriModelDelegateProtocol> *delegate; // ivar: _delegate


-(BOOL)offerDynamicAssetToAccessory:(id)arg0 tag:(id)arg1 error:(*id)arg2 ;
-(BOOL)processDynamicAsset:(*id)arg0 ;
-(NSUInteger)majorVersion;
-(NSUInteger)minorVersion;
-(NSUInteger)uarpProtocolVersion;
-(id)init;
-(id)initWithAccessory:(id)arg0 controller:(id)arg1 url:(id)arg2 ;
-(id)initWithAccessory:(id)arg0 uarpProtocolVersion:(NSUInteger)arg1 controller:(id)arg2 url:(id)arg3 ;
-(id)superbinary;
-(id)url;
-(void)addDownloadedModel:(id)arg0 ;
-(void)addPreInstalledModel:(id)arg0 ;
-(void)checkCurrentHeySiriModel;
-(void)setMajorVersion:(NSUInteger)arg0 ;
-(void)setMinorVersion:(NSUInteger)arg0 ;
-(void)setSuperbinary:(id)arg0 ;
-(void)setUrl:(id)arg0 ;


@end


#endif