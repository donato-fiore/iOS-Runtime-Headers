// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MESSAGEPROTECTION17GLTDIVERSIFIEDKEY_H
#define _TTC17MESSAGEPROTECTION17GLTDIVERSIFIEDKEY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _TtC17MessageProtection17GLTDiversifiedKey : NSObject

@property (nonatomic, readonly) *__SecKey diversifiedKey; // ivar: diversifiedKey
@property (nonatomic, readonly) NSData *trackingPreventionSalt; // ivar: trackingPreventionSalt


-(id)init;


@end


#endif