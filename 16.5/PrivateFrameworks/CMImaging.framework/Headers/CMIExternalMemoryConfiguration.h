// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIEXTERNALMEMORYCONFIGURATION_H
#define CMIEXTERNALMEMORYCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CMIExternalMemoryConfiguration : NSObject

@property (readonly, nonatomic) unsigned int inputPixelFormat; // ivar: _inputPixelFormat
@property (readonly, nonatomic) ? maxInputDimensions; // ivar: _maxInputDimensions
@property (readonly, nonatomic) ? maxOutputDimensions; // ivar: _maxOutputDimensions
@property (readonly, nonatomic) NSDictionary *processorSpecificOptions; // ivar: _processorSpecificOptions


-(id)description;
-(id)initWithMaxInputDimensions:(struct ? )arg0 inputPixelFormat:(unsigned int)arg1 maxOutputDimensions:(struct ? )arg2 processorSpecificOptions:(id)arg3 ;


@end


#endif