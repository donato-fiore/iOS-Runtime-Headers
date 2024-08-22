// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSPARALLELRANDOMMTGP32STATE_H
#define MPSPARALLELRANDOMMTGP32STATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSParallelRandomMTGP32State : NSObject <NSCopying, NSSecureCoding>

 {
    *unsigned int _state;
    ? _stateParams;
}




+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif