// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSTREAMSYNCPLATFORMPOLICY_H
#define BMSTREAMSYNCPLATFORMPOLICY_H


#import <Foundation/Foundation.h>


@interface BMStreamSyncPlatformPolicy : NSObject

@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, nonatomic) NSUInteger transportType; // ivar: _transportType


-(id)initWithTransportType:(NSUInteger)arg0 direction:(NSUInteger)arg1 ;


@end


#endif