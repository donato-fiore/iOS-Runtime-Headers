// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLAPPLEWORDTAGGERPARAMETERS_H
#define MLAPPLEWORDTAGGERPARAMETERS_H

@class NSString, NSDictionary, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface MLAppleWordTaggerParameters : NSObject

@property (retain) NSString *inputFeatureName; // ivar: _inputFeatureName
@property (retain) NSString *language; // ivar: _language
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSData *modelParameterData; // ivar: _modelParameterData
@property NSUInteger revision; // ivar: _revision
@property (retain) NSArray *tagNames; // ivar: _tagNames
@property (retain) NSString *tokenLengthsOutputFeatureName; // ivar: _tokenLengthsOutputFeatureName
@property (retain) NSString *tokenLocationsOutputFeatureName; // ivar: _tokenLocationsOutputFeatureName
@property (retain) NSString *tokenTagsOutputFeatureName; // ivar: _tokenTagsOutputFeatureName
@property (retain) NSString *tokensOutputFeatureName; // ivar: _tokensOutputFeatureName


-(id)initWithData:(NSUInteger)arg0 language:(id)arg1 inputFeatureName:(id)arg2 tokensFeatureName:(id)arg3 tokenTagsFeatureName:(id)arg4 tokenLocationsFeatureName:(id)arg5 tokenLengthsFeatureName:(id)arg6 modelData:(id)arg7 tagNames:(id)arg8 error:(*id)arg9 ;
-(id)initWithData:(NSUInteger)arg0 language:(id)arg1 inputFeatureName:(id)arg2 tokensFeatureName:(id)arg3 tokenTagsFeatureName:(id)arg4 tokenLocationsFeatureName:(id)arg5 tokenLengthsFeatureName:(id)arg6 modelData:(id)arg7 tagNames:(id)arg8 metadata:(id)arg9 error:(*id)arg10 ;


@end


#endif