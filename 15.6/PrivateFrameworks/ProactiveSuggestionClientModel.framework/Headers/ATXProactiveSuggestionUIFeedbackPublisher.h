// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONUIFEEDBACKPUBLISHER_H
#define ATXPROACTIVESUGGESTIONUIFEEDBACKPUBLISHER_H

@class BPSPublisher<BMBookmarkablePublisher>, NSSet;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionUIFeedbackPublisher : NSObject

@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher; // ivar: _blendingModelPublisher
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *clientModelPublisher; // ivar: _clientModelPublisher
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *contextPublisher; // ivar: _contextPublisher
@property (retain, nonatomic) NSObject<ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters; // ivar: _hyperParameters
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *uiPublisher; // ivar: _uiPublisher
@property (retain, nonatomic) NSSet *validClientModelIds; // ivar: _validClientModelIds
@property (nonatomic) unsigned char validUICacheConsumerSubType; // ivar: _validUICacheConsumerSubType


-(id)_filteredBlendingCacheUpdatePublisher:(id)arg0 ;
-(id)_filteredCacheUpdateClientModelPublisher:(id)arg0 ;
-(id)_timestampFromEvent:(id)arg0 ;
-(id)clientModelsToConsider;
-(id)initWithClientModelPublisher:(id)arg0 blendingModelPublisher:(id)arg1 uiPublisher:(id)arg2 contextPublisher:(id)arg3 validUICacheConsumerSubType:(unsigned char)arg4 validClientModelIds:(id)arg5 hyperParameters:(id)arg6 ;
-(id)mergedBlendingClientContextPublisher;
-(id)uiFeedbackPublisher;
-(id)uiFeedbackSessionPublisherWithCorrelateHandler:(id)arg0 ;


@end


#endif