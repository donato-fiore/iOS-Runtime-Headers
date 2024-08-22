// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHSINGLEGATERNNDESCRIPTOR_H
#define MPSGRAPHSINGLEGATERNNDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphSingleGateRNNDescriptor : NSObject <NSCopying>

 {
    BOOL _hasMask;
    BOOL _hasInitState;
}


@property (nonatomic) NSUInteger activation; // ivar: _activation
@property (nonatomic) BOOL bidirectional; // ivar: _bidirectional
@property (nonatomic) BOOL reverse; // ivar: _reverse
@property (nonatomic) BOOL training; // ivar: _training


+(id)descriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif