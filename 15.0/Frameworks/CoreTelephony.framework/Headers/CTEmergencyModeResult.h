// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTEMERGENCYMODERESULT_H
#define CTEMERGENCYMODERESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTXPCServiceSubscriptionContext.h"
#import "CTEmergencyMode.h"

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context; // ivar: _context
@property (readonly, nonatomic) CTEmergencyMode *mode; // ivar: _mode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(id)arg0 andContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif