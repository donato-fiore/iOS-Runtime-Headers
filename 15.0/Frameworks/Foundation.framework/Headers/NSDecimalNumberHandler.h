// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDECIMALNUMBERHANDLER_H
#define NSDECIMALNUMBERHANDLER_H

@protocol NSDecimalNumberBehaviors, NSCoding;

#import <Foundation/Foundation.h>


@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding>

 {
    BOOL _scale;
    BOOL _roundingMode;
    BOOL _raiseOnExactness;
    BOOL _raiseOnOverflow;
    BOOL _raiseOnUnderflow;
    BOOL _raiseOnDivideByZero;
    BOOL _unused;
    *void _reserved2;
    *void _reserved;
}




+(id)decimalNumberHandlerWithRoundingMode:(NSUInteger)arg0 scale:(short)arg1 raiseOnExactness:(BOOL)arg2 raiseOnOverflow:(BOOL)arg3 raiseOnUnderflow:(BOOL)arg4 raiseOnDivideByZero:(BOOL)arg5 ;
+(id)defaultDecimalNumberHandler;
-(NSUInteger)roundingMode;
-(id)exceptionDuringOperation:(SEL)arg0 error:(NSUInteger)arg1 leftOperand:(id)arg2 rightOperand:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRoundingMode:(NSUInteger)arg0 scale:(short)arg1 raiseOnExactness:(BOOL)arg2 raiseOnOverflow:(BOOL)arg3 raiseOnUnderflow:(BOOL)arg4 raiseOnDivideByZero:(BOOL)arg5 ;
-(short)scale;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif