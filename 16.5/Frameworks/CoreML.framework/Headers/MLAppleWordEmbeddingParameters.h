// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLAPPLEWORDEMBEDDINGPARAMETERS_H
#define MLAPPLEWORDEMBEDDINGPARAMETERS_H

@class NSString, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface MLAppleWordEmbeddingParameters : NSObject

@property (retain) NSString *inputFeatureName; // ivar: _inputFeatureName
@property (retain) NSString *language; // ivar: _language
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSData *modelParameterData; // ivar: _modelParameterData
@property (retain) NSString *outputFeatureName; // ivar: _outputFeatureName
@property NSUInteger revision; // ivar: _revision


-(id)initWithData:(NSUInteger)arg0 language:(id)arg1 inputFeatureName:(id)arg2 outputFeatureName:(id)arg3 modelData:(id)arg4 error:(*id)arg5 ;
-(id)initWithData:(NSUInteger)arg0 language:(id)arg1 inputFeatureName:(id)arg2 outputFeatureName:(id)arg3 modelData:(id)arg4 metadata:(id)arg5 error:(*id)arg6 ;


@end


#endif