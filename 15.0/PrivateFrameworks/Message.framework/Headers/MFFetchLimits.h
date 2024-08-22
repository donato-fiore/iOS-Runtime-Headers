// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFETCHLIMITS_H
#define MFFETCHLIMITS_H


#import <Foundation/Foundation.h>


@interface MFFetchLimits : NSObject

@property (nonatomic) NSUInteger fetchMaxBytes; // ivar: _fetchMaxBytes
@property (nonatomic) NSUInteger fetchMinBytes; // ivar: _fetchMinBytes
@property (nonatomic) NSUInteger minBytesLeft; // ivar: _minBytesLeft


-(id)description;
-(id)init;


@end


#endif