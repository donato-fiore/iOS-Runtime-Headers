// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUFILTERPARAMETERS_H
#define NUFILTERPARAMETERS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NUFilterParameters : NSObject

@property (copy) NSDictionary *inputNodes; // ivar: _inputNodes
@property (copy) NSDictionary *settings; // ivar: _settings


-(id)description;
-(id)init;


@end


#endif