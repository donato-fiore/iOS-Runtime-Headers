// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNNEURONDESCRIPTOR_H
#define MPSNNNEURONDESCRIPTOR_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPSNNNeuronDescriptor : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _noCopy;
    NSUInteger _count;
}


@property (nonatomic) float a; // ivar: _a
@property (nonatomic) float b; // ivar: _b
@property (nonatomic) float c; // ivar: _c
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) int neuronType; // ivar: _neuronType


+(id)cnnNeuronDescriptorWithType:(int)arg0 ;
+(id)cnnNeuronDescriptorWithType:(int)arg0 a:(float)arg1 ;
+(id)cnnNeuronDescriptorWithType:(int)arg0 a:(float)arg1 b:(float)arg2 ;
+(id)cnnNeuronDescriptorWithType:(int)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 ;
+(id)cnnNeuronPReLUDescriptorWithData:(id)arg0 noCopy:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPReLUWithData:(id)arg0 noCopy:(BOOL)arg1 ;
-(id)initWithType:(int)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 ;
-(struct NeuronInfo )neuronInfo;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initializeWithPReLUWithData:(id)arg0 noCopy:(BOOL)arg1 ;
-(void)initializeWithType:(int)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 ;


@end


#endif