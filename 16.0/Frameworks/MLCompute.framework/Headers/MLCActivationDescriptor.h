// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCACTIVATIONDESCRIPTOR_H
#define MLCACTIVATIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLCActivationDescriptor : NSObject <NSCopying>



@property (readonly, nonatomic) float a; // ivar: _a
@property (readonly, nonatomic) int activationType; // ivar: _activationType
@property (readonly, nonatomic) float b; // ivar: _b
@property (readonly, nonatomic) float c; // ivar: _c


+(id)defaultParametersForType;
+(id)descriptorWithType:(int)arg0 ;
+(id)descriptorWithType:(int)arg0 a:(float)arg1 ;
+(id)descriptorWithType:(int)arg0 a:(float)arg1 b:(float)arg2 ;
+(id)descriptorWithType:(int)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(int)arg0 a:(float)arg1 b:(float)arg2 c:(float)arg3 ;


@end


#endif