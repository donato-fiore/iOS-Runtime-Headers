// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLODLDCONFIGDECODER_H
#define SLODLDCONFIGDECODER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SLODLDConfigDecoder : NSObject

@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (retain, nonatomic) NSString *resourcePath; // ivar: _resourcePath


-(NSUInteger)getInputType;
-(NSUInteger)getPreProcessorType;
-(NSUInteger)getTokenizerType;
-(id)_getValueForKey:(id)arg0 categoryKey:(id)arg1 ;
-(id)getBertModelFile;
-(id)getBertModelOutputNodes;
-(id)getConfigVersion;
-(id)getOutputSpecs;
-(id)getRegexMapConfig;
-(id)getSPMModelFile;
-(id)initWithConfigFile:(id)arg0 ;


@end


#endif