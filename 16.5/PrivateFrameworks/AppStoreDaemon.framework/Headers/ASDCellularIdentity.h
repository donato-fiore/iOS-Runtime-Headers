// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDCELLULARIDENTITY_H
#define ASDCELLULARIDENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASDCellularIdentity : NSObject

@property (readonly) NSString *defaultsKey; // ivar: _defaultsKey
@property (getter=isRoaming) BOOL roaming; // ivar: _roaming
@property (readonly) NSString *simIdentity; // ivar: _simIdentity


+(id)identityForSubscription:(id)arg0 usingClient:(id)arg1 error:(*id)arg2 ;
+(id)nullIdentity;
-(id)description;


@end


#endif