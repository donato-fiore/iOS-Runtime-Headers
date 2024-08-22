// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSKNNZKWATXDELEGATEWRAPPER_H
#define _PSKNNZKWATXDELEGATEWRAPPER_H

@class NSArray, NSString;
@protocol ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol;

#import <Foundation/Foundation.h>

#import "_PSKNNModel.h"
#import "_PSKNNModelConfiguration.h"

@interface _PSKNNZKWATXDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol>

 {
    _PSKNNModel *_knnModel;
    NSInteger _modelType;
    _PSKNNModelConfiguration *_modelConfiguration;
    NSUInteger _maxSuggestions;
    NSArray *_transformers;
    BOOL _isEnabled;
    NSInteger _defaultConfidenceCategory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getInteractionFilterForPrimaryInteractionsModel:(SEL)arg0 ;
-(id)getSuggestionsWithPredictionContext:(id)arg0 ;
-(id)initWithKNNModel:(id)arg0 fallbackInteractionConfig:(id)arg1 ;
-(id)initWithKNNModel:(id)arg0 modelType:(NSInteger)arg1 modelConfiguration:(id)arg2 maxSuggestions:(NSUInteger)arg3 transformers:(id)arg4 isEnabled:(BOOL)arg5 defaultConfidenceCategory:(NSInteger)arg6 ;
-(id)initWithKNNModel:(id)arg0 primaryInteractionsConfig:(id)arg1 ;
-(void)pingWithCompletion:(id)arg0 ;
-(void)suggestionsForInteractionSuggestionRequest:(id)arg0 reply:(id)arg1 ;
-(void)updateWithFallbackInteractionsConfig:(id)arg0 ;
-(void)updateWithPrimaryInteractionsConfig:(id)arg0 ;


@end


#endif