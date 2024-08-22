// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHVARIABLEINITIALIZER_H
#define MPSGRAPHVARIABLEINITIALIZER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPSGraphVariableInitializer : NSObject {
    CGFloat _constant;
    CGFloat _minimum;
    CGFloat _maximum;
    NSString *_file;
}


@property (readonly, nonatomic) unsigned int initializerType; // ivar: _initializerType


+(id)initializerWithConstant:(CGFloat)arg0 ;
+(id)initializerWithFile:(id)arg0 ;
+(id)initializerWithOnes;
+(id)initializerWithRandomUniformWithMinimum:(CGFloat)arg0 maximum:(CGFloat)arg1 ;
+(id)initializerWithZeros;
-(id)init;
-(id)initializedDataWithNumberOfValues:(NSUInteger)arg0 dataType:(unsigned int)arg1 ;


@end


#endif