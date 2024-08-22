// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UARPHEYSIRIMODELCOMPACT_H
#define UARPHEYSIRIMODELCOMPACT_H

@class NSURL, NSString;
@protocol UARPHeySiriModelDelegateProtocol, OS_os_log;


#import "UARPHeySiriModelBase.h"
#import "UARPSuperBinaryAsset.h"
#import "UARPSuperBinaryAssetPayload.h"

@interface UARPHeySiriModelCompact : UARPHeySiriModelBase <UARPHeySiriModelDelegateProtocol>

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
-(id)generateAsset:(*id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 controller:(id)arg1 url:(id)arg2 ;
-(id)initWithAccessory:(id)arg0 uarpProtocolVersion:(NSUInteger)arg1 controller:(id)arg2 url:(id)arg3 ;
-(id)uarpPayloadWithHSModel:(id)arg0 ;
-(void)currentHeySiriModel:(id)arg0 fallbackModel:(id)arg1 error:(id)arg2 ;


@end


#endif