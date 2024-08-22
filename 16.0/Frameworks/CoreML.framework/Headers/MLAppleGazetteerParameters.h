// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLAPPLEGAZETTEERPARAMETERS_H
#define MLAPPLEGAZETTEERPARAMETERS_H

@class NSString, NSArray, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface MLAppleGazetteerParameters : NSObject

@property (retain) NSString *inputFeatureName; // ivar: _inputFeatureName
@property (retain) NSArray *labelNames; // ivar: _labelNames
@property (retain) NSString *language; // ivar: _language
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSData *modelParameterData; // ivar: _modelParameterData
@property (retain) NSString *outputFeatureName; // ivar: _outputFeatureName
@property NSUInteger revision; // ivar: _revision


-(id)initWithData:(NSUInteger)arg0 language:(id)arg1 inputFeatureName:(id)arg2 outputFeatureName:(id)arg3 modelData:(id)arg4 labelNames:(id)arg5 metadata:(id)arg6 error:(*id)arg7 ;


@end


#endif