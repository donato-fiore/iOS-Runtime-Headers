// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVPLAYBACKLEASECALLBACK_H
#define SSVPLAYBACKLEASECALLBACK_H

@class NSError;

#import <Foundation/Foundation.h>

#import "SSVPlaybackLeaseResponse.h"

@interface SSVPlaybackLeaseCallback : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) SSVPlaybackLeaseResponse *response; // ivar: _response




@end


#endif