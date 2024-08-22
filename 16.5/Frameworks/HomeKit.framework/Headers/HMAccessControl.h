// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMACCESSCONTROL_H
#define HMACCESSCONTROL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMUser.h"

@interface HMAccessControl : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger cachedHash; // ivar: _cachedHash
@property (weak) HMUser *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif