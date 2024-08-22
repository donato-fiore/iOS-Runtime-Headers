// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NDANALYTICSPAYLOADUPLOADER_H
#define NDANALYTICSPAYLOADUPLOADER_H

@class FCAnalyticsEndpointConnection, FCAsyncSerialQueue;

#import <Foundation/Foundation.h>


@interface NDAnalyticsPayloadUploader : NSObject

@property (retain, nonatomic) FCAnalyticsEndpointConnection *endpointConnection; // ivar: _endpointConnection
@property (retain, nonatomic) FCAsyncSerialQueue *uploadQueue; // ivar: _uploadQueue


-(id)init;
-(id)initWithAppConfigurationManager:(id)arg0 ;
// -(void)uploadPayloadsForInfos:(id)arg0 withEnvelopeStore:(id)arg1 perPayloadCompletion:(id)arg2 completion:(unk)arg3  ;


@end


#endif