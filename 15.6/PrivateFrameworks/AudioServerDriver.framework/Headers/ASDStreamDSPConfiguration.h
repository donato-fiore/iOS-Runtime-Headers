// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDSTREAMDSPCONFIGURATION_H
#define ASDSTREAMDSPCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "ASDDSPConfiguration.h"

@interface ASDStreamDSPConfiguration : NSObject

@property (readonly, nonatomic) ASDDSPConfiguration *hardwareDSP; // ivar: _hardwareDSP


-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 ;


@end


#endif