// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETLAYERINITIALIZATIONPARAMETERS_H
#define ETLAYERINITIALIZATIONPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ETLayerInitializationParameters : NSObject

@property (readonly) NSDictionary *parameters; // ivar: _parameters


-(id)initWithMode:(NSUInteger)arg0 parameters:(id)arg1 error:(*id)arg2 ;


@end


#endif