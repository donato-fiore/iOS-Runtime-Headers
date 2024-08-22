// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLODLDPROCESSORRESULT_H
#define SLODLDPROCESSORRESULT_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SLODLDProcessorResult : NSObject

@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) NSDictionary *features; // ivar: _features
@property (readonly, nonatomic) float odldScore; // ivar: _odldScore
@property (readonly, nonatomic) NSArray *tokens; // ivar: _tokens


-(id)initWithScore:(float)arg0 withVersion:(id)arg1 tokens:(id)arg2 features:(id)arg3 ;


@end


#endif