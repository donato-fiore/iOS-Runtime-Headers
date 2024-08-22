// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPMODELTUNINGSTATE_H
#define _CDPMODELTUNINGSTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CDPModelTuningState : NSObject <NSSecureCoding>



@property (nonatomic) float bestLogLambda; // ivar: _bestLogLambda
@property (nonatomic) float bestScore; // ivar: _bestScore
@property (nonatomic) float bestThreshold; // ivar: _bestThreshold
@property (nonatomic) float bestW0; // ivar: _bestW0
@property (nonatomic) int i; // ivar: _i
@property (nonatomic) int j; // ivar: _j
@property (readonly, nonatomic) float progress;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif