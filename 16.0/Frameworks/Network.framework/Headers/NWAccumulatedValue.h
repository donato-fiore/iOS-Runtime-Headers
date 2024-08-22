// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWACCUMULATEDVALUE_H
#define NWACCUMULATEDVALUE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NWAccumulation.h"

@interface NWAccumulatedValue : NSObject

@property (retain, nonatomic) NWAccumulation *accumulation; // ivar: _accumulation
@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (retain, nonatomic) NSObject *object; // ivar: _object


-(id)description;
-(id)snapshot;


@end


#endif