// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESPEECHTRANSLATIONSERVERENDPOINTFEATURES_H
#define FTMUTABLESPEECHTRANSLATIONSERVERENDPOINTFEATURES_H

@class NSString;


#import "FTSpeechTranslationServerEndpointFeatures.h"
#import "FTServerEndpointFeatures.h"

@interface FTMutableSpeechTranslationServerEndpointFeatures : FTSpeechTranslationServerEndpointFeatures

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) FTServerEndpointFeatures *server_endpoint_features;
@property (copy, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif