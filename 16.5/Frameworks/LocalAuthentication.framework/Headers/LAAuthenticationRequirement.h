// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAAUTHENTICATIONREQUIREMENT_H
#define LAAUTHENTICATIONREQUIREMENT_H

@class NSMutableSet;
@protocol LAACLSerializable;

#import <Foundation/Foundation.h>


@interface LAAuthenticationRequirement : NSObject <LAACLSerializable>

 {
    NSInteger _authType;
    NSMutableSet *_subrequirements;
}




+(id)biometryCurrentSetRequirement;
+(id)biometryCurrentSetRequirementWithFallback:(id)arg0 ;
+(id)biometryRefreshableSetRequirementWithFallback:(id)arg0 ;
+(id)biometryRequirement;
+(id)biometryRequirementWithFallback:(id)arg0 ;
+(id)defaultRequirement;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)key;
-(id)requirementByAddingExtendedRequirement:(id)arg0 ;
-(void)encodeWithACLCoder:(id)arg0 ;


@end


#endif