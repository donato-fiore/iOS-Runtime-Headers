// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GLTDIVERSIFIEDKEYANDTPS_H
#define GLTDIVERSIFIEDKEYANDTPS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface GLTDiversifiedKeyAndTPS : NSObject

@property (readonly, nonatomic) *__SecKey diversifiedKey; // ivar: _diversifiedKey
@property (readonly, nonatomic) NSData *trackingPreventionSalt; // ivar: _trackingPreventionSalt


-(id)initWithKey:(struct __SecKey *)arg0 trackingPreventionSalt:(id)arg1 ;


@end


#endif