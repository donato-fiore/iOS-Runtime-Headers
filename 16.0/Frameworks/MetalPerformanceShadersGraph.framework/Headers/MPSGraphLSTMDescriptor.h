// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHLSTMDESCRIPTOR_H
#define MPSGRAPHLSTMDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphLSTMDescriptor : NSObject <NSCopying>

 {
    BOOL _hasMask;
    BOOL _hasInitState;
    BOOL _hasInitCell;
    BOOL _hasPeephole;
    BOOL _hasCellGradient;
}


@property (nonatomic) NSUInteger activation; // ivar: _activation
@property (nonatomic) BOOL bidirectional; // ivar: _bidirectional
@property (nonatomic) NSUInteger cellGateActivation; // ivar: _cellGateActivation
@property (nonatomic) NSUInteger forgetGateActivation; // ivar: _forgetGateActivation
@property (nonatomic) BOOL forgetGateLast; // ivar: _forgetGateLast
@property (nonatomic) NSUInteger inputGateActivation; // ivar: _inputGateActivation
@property (nonatomic) NSUInteger outputGateActivation; // ivar: _outputGateActivation
@property (nonatomic) BOOL produceCell; // ivar: _produceCell
@property (nonatomic) BOOL reverse; // ivar: _reverse
@property (nonatomic) BOOL training; // ivar: _training


+(id)descriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif