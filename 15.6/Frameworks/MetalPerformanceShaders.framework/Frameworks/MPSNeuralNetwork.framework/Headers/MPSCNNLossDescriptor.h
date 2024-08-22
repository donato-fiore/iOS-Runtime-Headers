// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNLOSSDESCRIPTOR_H
#define MPSCNNLOSSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSCNNLossDescriptor : NSObject <NSCopying>



@property (nonatomic) float delta; // ivar: _delta
@property (nonatomic) float epsilon; // ivar: _epsilon
@property (nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (nonatomic) unsigned int lossType; // ivar: _lossType
@property (nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) float weight; // ivar: _weight


+(id)cnnLossDescriptorWithType:(unsigned int)arg0 reductionType:(int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(void)dealloc;


@end


#endif