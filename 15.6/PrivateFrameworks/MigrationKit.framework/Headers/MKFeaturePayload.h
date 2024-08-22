// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKFEATUREPAYLOAD_H
#define MKFEATUREPAYLOAD_H

@class NSDecimalNumber, NSString;

#import <Foundation/Foundation.h>


@interface MKFeaturePayload : NSObject

@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSDecimalNumber *importElapsedTime; // ivar: _importElapsedTime
@property (nonatomic) NSUInteger size; // ivar: _size
@property (copy, nonatomic) NSString *state; // ivar: _state
@property (nonatomic) NSUInteger totalElapsedTime; // ivar: _totalElapsedTime


-(id)init;


@end


#endif