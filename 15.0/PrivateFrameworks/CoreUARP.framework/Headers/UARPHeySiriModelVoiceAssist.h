// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPHEYSIRIMODELVOICEASSIST_H
#define UARPHEYSIRIMODELVOICEASSIST_H

@class NSURL, NSString;
@protocol UARPHeySiriModelDelegateProtocol, OS_os_log;


#import "UARPHeySiriModelBase.h"
#import "UARPSuperBinaryAsset.h"
#import "UARPSuperBinaryAssetPayload.h"

@interface UARPHeySiriModelVoiceAssist : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol>

 {
    NSObject<OS_os_log> *_log;
    NSURL *_superBinaryMetaDataURL;
    NSURL *_modelMetaDataURL;
    NSURL *_modelDataURL;
    NSURL *_fallbackModelMetaDataURL;
    NSURL *_fallbackModelDataURL;
    UARPSuperBinaryAsset *_asset;
    UARPSuperBinaryAssetPayload *_payloadModel;
    UARPSuperBinaryAssetPayload *_payloadFallbackModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tag;
-(BOOL)processDynamicAsset:(*id)arg0 ;
-(id)buildURLForTemporaryFile;
-(id)generateAsset:(*id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 controller:(id)arg1 url:(id)arg2 ;
-(void)currentHeySiriModel:(id)arg0 fallbackModel:(id)arg1 error:(id)arg2 ;


@end


#endif