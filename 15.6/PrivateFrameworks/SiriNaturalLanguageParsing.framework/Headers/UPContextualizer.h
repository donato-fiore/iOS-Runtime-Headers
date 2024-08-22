// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPCONTEXTUALIZER_H
#define UPCONTEXTUALIZER_H


#import <Foundation/Foundation.h>

#import "UPContextualizerStrategyCancel.h"
#import "UPContextualizerStrategyOffer.h"
#import "UPContextualizerStrategyOptions.h"
#import "UPContextualizerStrategyPrompt.h"

@interface UPContextualizer : NSObject

@property (readonly, nonatomic) UPContextualizerStrategyCancel *cancelContextualizerStrategy; // ivar: _cancelContextualizerStrategy
@property (readonly, nonatomic) UPContextualizerStrategyOffer *offerContextualizerStrategy; // ivar: _offerContextualizerStrategy
@property (readonly, nonatomic) UPContextualizerStrategyOptions *optionsContextualizerStrategy; // ivar: _optionsContextualizerStrategy
@property (readonly, nonatomic) CGFloat prebuiltIntentThreshold; // ivar: _prebuiltIntentThreshold
@property (readonly, nonatomic) UPContextualizerStrategyPrompt *promptContextualizerStrategy; // ivar: _promptContextualizerStrategy


-(id)_contextualizeByDialogActTypeUsingContextualizerInput:(id)arg0 ;
-(id)init;
-(id)initWithPrebuiltIntentThreshold:(CGFloat)arg0 ;
-(id)resultWithContextualizerInput:(id)arg0 ;


@end


#endif