// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LABIOMETRYFALLBACKREQUIREMENT_H
#define LABIOMETRYFALLBACKREQUIREMENT_H

@class NSArray;
@protocol LAACLSerializable;

#import <Foundation/Foundation.h>


@interface LABiometryFallbackRequirement : NSObject <LAACLSerializable>

 {
    NSInteger _authType;
    NSArray *_subrequirements;
}




+(id)customPasswordRequirement:(id)arg0 ;
+(id)defaultRequirement;
+(id)devicePasscodeRequirement;
-(BOOL)isEqual:(id)arg0 ;
-(void)encodeWithACLCoder:(id)arg0 ;


@end


#endif