// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHGRUDESCRIPTOR_H
#define MPSGRAPHGRUDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphGRUDescriptor : NSObject <NSCopying>

 {
    BOOL _hasMask;
    BOOL _hasInitState;
    BOOL _hasBias2;
}


@property (nonatomic) BOOL bidirectional; // ivar: _bidirectional
@property (nonatomic) BOOL flipZ; // ivar: _flipZ
@property (nonatomic) NSUInteger outputGateActivation; // ivar: _outputGateActivation
@property (nonatomic) BOOL resetAfter; // ivar: _resetAfter
@property (nonatomic) NSUInteger resetGateActivation; // ivar: _resetGateActivation
@property (nonatomic) BOOL resetGateFirst; // ivar: _resetGateFirst
@property (nonatomic) BOOL reverse; // ivar: _reverse
@property (nonatomic) BOOL training; // ivar: _training
@property (nonatomic) NSUInteger updateGateActivation; // ivar: _updateGateActivation


+(id)descriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif