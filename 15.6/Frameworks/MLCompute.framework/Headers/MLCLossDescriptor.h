// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCLOSSDESCRIPTOR_H
#define MLCLOSSDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCLossDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger classCount; // ivar: _classCount
@property (readonly, nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (readonly, nonatomic) int lossType; // ivar: _lossType
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (readonly, nonatomic) float weight; // ivar: _weight


+(id)descriptorWithType:(int)arg0 reductionType:(int)arg1 ;
+(id)descriptorWithType:(int)arg0 reductionType:(int)arg1 weight:(float)arg2 ;
+(id)descriptorWithType:(int)arg0 reductionType:(int)arg1 weight:(float)arg2 labelSmoothing:(float)arg3 classCount:(NSUInteger)arg4 ;
+(id)descriptorWithType:(int)arg0 reductionType:(int)arg1 weight:(float)arg2 labelSmoothing:(float)arg3 classCount:(NSUInteger)arg4 epsilon:(float)arg5 delta:(float)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLossDescriptorWithType:(int)arg0 reductionType:(int)arg1 weight:(float)arg2 ;
-(id)initWithLossDescriptorWithType:(int)arg0 reductionType:(int)arg1 weight:(float)arg2 labelSmoothing:(float)arg3 classCount:(NSUInteger)arg4 epsilon:(float)arg5 delta:(float)arg6 ;


@end


#endif