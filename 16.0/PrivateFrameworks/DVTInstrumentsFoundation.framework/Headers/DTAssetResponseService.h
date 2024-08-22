// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTASSETRESPONSESERVICE_H
#define DTASSETRESPONSESERVICE_H

@class DTXService, NSString;
@protocol DTAssetResponseServiceProtocol;



@interface DTAssetResponseService : DTXService <DTAssetResponseServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)canContinueServingRequestWithIdentifier:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;


@end


#endif