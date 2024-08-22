// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICOREERRORINFO_H
#define SIRICOREERRORINFO_H

@class NSError;

#import <Foundation/Foundation.h>


@interface SiriCoreErrorInfo : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isPeerConnectionError; // ivar: _isPeerConnectionError
@property (nonatomic) BOOL isPeerNotNearbyError; // ivar: _isPeerNotNearbyError




@end


#endif