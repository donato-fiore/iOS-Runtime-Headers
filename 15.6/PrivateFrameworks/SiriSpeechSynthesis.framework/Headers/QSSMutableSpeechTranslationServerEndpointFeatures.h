// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLESPEECHTRANSLATIONSERVERENDPOINTFEATURES_H
#define QSSMUTABLESPEECHTRANSLATIONSERVERENDPOINTFEATURES_H

@class NSString;


#import "QSSSpeechTranslationServerEndpointFeatures.h"
#import "QSSServerEndpointFeatures.h"

@interface QSSMutableSpeechTranslationServerEndpointFeatures : QSSSpeechTranslationServerEndpointFeatures

@property (copy, nonatomic) NSString *conversation_id;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) QSSServerEndpointFeatures *server_endpoint_features;
@property (copy, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif