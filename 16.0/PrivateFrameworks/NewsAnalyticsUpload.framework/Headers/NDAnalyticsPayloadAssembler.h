// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDANALYTICSPAYLOADASSEMBLER_H
#define NDANALYTICSPAYLOADASSEMBLER_H

@protocol NDAnalyticsPayloadAssemblerConfigProvider;

#import <Foundation/Foundation.h>


@interface NDAnalyticsPayloadAssembler : NSObject

@property (retain, nonatomic) NSObject<NDAnalyticsPayloadAssemblerConfigProvider> *configProvider; // ivar: _configProvider
@property (nonatomic) NSUInteger maxPayloadSize; // ivar: _maxPayloadSize


-(id)init;
-(id)initWithConfigProvider:(id)arg0 maxPayloadSize:(NSUInteger)arg1 ;
-(void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(id)arg0 ;
-(void)assemblePayloadsWithEntries:(id)arg0 lastUploadDatesByContentType:(id)arg1 droppedEnvelopeReasonsToUpload:(id)arg2 envelopeSizeByEntry:(id)arg3 completion:(id)arg4 ;
-(void)determinePayloadDeliveryWindowForEntries:(id)arg0 withLastUploadDatesByContentType:(id)arg1 completion:(id)arg2 ;


@end


#endif