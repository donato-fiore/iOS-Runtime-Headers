// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BUCELLULARIDENTITY_H
#define BUCELLULARIDENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BUCellularIdentity : NSObject

@property (readonly, nonatomic) NSString *defaultsKey; // ivar: _defaultsKey
@property (nonatomic, getter=isRoaming) BOOL roaming; // ivar: _roaming
@property (readonly, nonatomic) NSString *simIdentity; // ivar: _simIdentity


+(id)_digestMD5:(id)arg0 ;
+(id)identityForSubscription:(id)arg0 usingClient:(id)arg1 error:(*id)arg2 ;
-(id)description;
-(id)initWithSIMIdentity:(id)arg0 roaming:(BOOL)arg1 ;
-(id)redactedDescription;


@end


#endif