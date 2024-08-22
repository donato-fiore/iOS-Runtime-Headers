// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESCONFIG_H
#define SGQUICKRESPONSESCONFIG_H

@class NSArray, NSString, PMLSessionDescriptor;

#import <Foundation/Foundation.h>

#import "SGQuickResponsesClassificationParameters.h"
#import "SGCustomResponsesParameters.h"
#import "SGModelHyperparameters.h"
#import "SGQuickResponsesPredictionParameters.h"
#import "SGQuickResponsesReplies.h"

@interface SGQuickResponsesConfig : NSObject

@property (readonly, nonatomic) SGQuickResponsesClassificationParameters *classificationParams; // ivar: _classificationParams
@property (readonly, nonatomic) SGCustomResponsesParameters *customResponsesParameters; // ivar: _customResponsesParameters
@property (readonly, nonatomic) NSArray *labels; // ivar: _labels
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) SGModelHyperparameters *modelHyperparameters; // ivar: _modelHyperparameters
@property (readonly, nonatomic) SGQuickResponsesPredictionParameters *predictionParams; // ivar: _predictionParams
@property (readonly, nonatomic) NSArray *preprocessingMethods; // ivar: _preprocessingMethods
@property (readonly, nonatomic) SGQuickResponsesReplies *replies; // ivar: _replies
@property (readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // ivar: _sessionDescriptor


+(id)_cacheKeyForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(id)_sharedCache;
+(id)configWithLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(void)_addModelAssetUpdateHandler;
-(id)initWithLanguage:(id)arg0 mode:(NSUInteger)arg1 dictionary:(id)arg2 ;
-(id)initWithLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;


@end


#endif