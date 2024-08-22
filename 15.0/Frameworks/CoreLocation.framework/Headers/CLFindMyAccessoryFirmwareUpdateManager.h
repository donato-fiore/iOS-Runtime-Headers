// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLFINDMYACCESSORYFIRMWAREUPDATEMANAGER_H
#define CLFINDMYACCESSORYFIRMWAREUPDATEMANAGER_H

@protocol OS_dispatch_queue, CLFindMyAccessoryFirmwareUpdateDelegate;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryFirmwareUpdateManager : NSObject {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> _connection;
}


@property (weak, nonatomic) NSObject<CLFindMyAccessoryFirmwareUpdateDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)abortFirmwareUpdateForDevice:(id)arg0 ;
-(void)fetchWhetherLocalFirmwareAssetIsInUseForProductGroup:(id)arg0 andProductNumber:(id)arg1 ;
-(void)getPersonalizationInfoForDevice:(id)arg0 ;
-(void)handleInterruption;
-(void)handleMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)updateFirmwareForDevice:(id)arg0 withAssetURL:(id)arg1 ;
-(void)useDefaultFirmwareAssetSourceForProductGroup:(id)arg0 andProductNumber:(id)arg1 ;
-(void)useLocalFirmwareAssetFromURL:(id)arg0 forProductGroup:(id)arg1 forProductNumber:(id)arg2 withSandboxExtension:(id)arg3 ;


@end


#endif