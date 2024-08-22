// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNDROPOUTRANDOMSTATE_H
#define MPSCNNDROPOUTRANDOMSTATE_H

@class MPSParallelRandomMTGP32State;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSCNNDropoutRandomState : NSObject <NSCopying, NSSecureCoding>

 {
    MPSParallelRandomMTGP32State *_rngState;
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