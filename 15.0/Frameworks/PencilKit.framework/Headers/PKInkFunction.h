// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKINKFUNCTION_H
#define PKINKFUNCTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PKInkFunction : NSObject

@property (retain, nonatomic) NSMutableArray *controlPoints; // ivar: _controlPoints
@property (nonatomic) NSUInteger deviceMask; // ivar: _deviceMask
@property (nonatomic) NSUInteger functionType; // ivar: _functionType
@property (nonatomic) NSUInteger inkInput; // ivar: _inkInput
@property (nonatomic) NSUInteger inkProperty; // ivar: _inkProperty
@property (nonatomic) NSUInteger inputMask; // ivar: _inputMask
@property (retain, nonatomic) NSMutableArray *inputPoints; // ivar: _inputPoints
@property (retain, nonatomic) NSMutableArray *maxOutputPoints; // ivar: _maxOutputPoints
@property (retain, nonatomic) NSMutableArray *minOutputPoints; // ivar: _minOutputPoints
@property (retain, nonatomic) NSMutableArray *outputPoints; // ivar: _outputPoints


+(id)inkFunctionForProperty:(NSUInteger)arg0 input:(NSUInteger)arg1 inputMask:(NSUInteger)arg2 deviceMask:(NSUInteger)arg3 inputPoints:(id)arg4 minOutputPoints:(id)arg5 maxOutputPoints:(id)arg6 functionType:(NSUInteger)arg7 ;
+(id)inkFunctionForProperty:(NSUInteger)arg0 input:(NSUInteger)arg1 inputMask:(NSUInteger)arg2 deviceMask:(NSUInteger)arg3 inputPoints:(id)arg4 outputPoints:(id)arg5 functionType:(NSUInteger)arg6 ;
-(id)description;
-(id)initWithInputPoints:(id)arg0 outputPoints:(id)arg1 functionType:(NSUInteger)arg2 ;
-(id)initWithProperty:(NSUInteger)arg0 input:(NSUInteger)arg1 inputMask:(NSUInteger)arg2 deviceMask:(NSUInteger)arg3 inputPoints:(id)arg4 minOutputPoints:(id)arg5 maxOutputPoints:(id)arg6 functionType:(NSUInteger)arg7 ;
-(id)initWithProperty:(NSUInteger)arg0 input:(NSUInteger)arg1 inputMask:(NSUInteger)arg2 deviceMask:(NSUInteger)arg3 inputPoints:(id)arg4 outputPoints:(id)arg5 functionType:(NSUInteger)arg6 ;


@end


#endif