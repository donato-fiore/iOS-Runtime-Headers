// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONUIFEEDBACKQUERY_H
#define ATXPROACTIVESUGGESTIONUIFEEDBACKQUERY_H

@class BPSPublisher<BMBookmarkablePublisher>, NSURL, NSSet, NSDate;
@protocol ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionUIFeedbackQuery : NSObject

@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher; // ivar: _blendingModelPublisher
@property (readonly, nonatomic) NSURL *bookmarkURLPath; // ivar: _bookmarkURLPath
@property (readonly, nonatomic) NSSet *clientModelIds; // ivar: _clientModelIds
@property (readonly, nonatomic) unsigned char consumerSubTypeToConsider; // ivar: _consumerSubTypeToConsider
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *contextPublisher; // ivar: _contextPublisher
@property (retain, nonatomic) NSObject<ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters; // ivar: _hyperParameters
@property (readonly, nonatomic) NSDate *startDateForResults; // ivar: _startDateForResults
@property (retain, nonatomic) BPSPublisher<BMBookmarkablePublisher> *uiPublisher; // ivar: _uiPublisher


-(id)initWithClientModelIds:(id)arg0 consumerSubTypeToConsider:(unsigned char)arg1 startDateForResults:(id)arg2 bookmarkURLPath:(id)arg3 uiPublisher:(id)arg4 blendingModelPublisher:(id)arg5 contextPublisher:(id)arg6 hyperParameters:(id)arg7 ;
-(id)uiFeedbackPublisher;
-(id)uiFeedbackPublisherChain;
// -(void)enumerateUIFeedbackResultsWithBlock:(id)arg0 completionBlock:(unk)arg1  ;


@end


#endif