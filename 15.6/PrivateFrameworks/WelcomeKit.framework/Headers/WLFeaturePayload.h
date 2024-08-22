// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLFEATUREPAYLOAD_H
#define WLFEATUREPAYLOAD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WLFeaturePayload : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger elapsedTime; // ivar: _elapsedTime
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) NSUInteger size; // ivar: _size
@property (copy, nonatomic) NSString *state; // ivar: _state


-(id)init;


@end


#endif