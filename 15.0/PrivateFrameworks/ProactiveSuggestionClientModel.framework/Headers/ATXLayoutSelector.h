// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXLAYOUTSELECTOR_H
#define ATXLAYOUTSELECTOR_H

@class NSString;
@protocol ATXLayoutSelectorProtocol, ATXUniversalSuggestionDeduplicatorProtocol, ATXUniversalBlendingLayerHyperParametersProtocol;

#import <Foundation/Foundation.h>


@interface ATXLayoutSelector : NSObject <ATXLayoutSelectorProtocol>

 {
    id<ATXUniversalSuggestionDeduplicatorProtocol> *_deduplicator;
    id<ATXUniversalBlendingLayerHyperParametersProtocol> *_hyperParameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSuggestionDeduplicator:(id)arg0 hyperParameters:(id)arg1 ;
-(id)selectedLayoutForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;
-(id)validLayoutsForConsumerSubType:(unsigned char)arg0 rankedSuggestions:(id)arg1 ;


@end


#endif