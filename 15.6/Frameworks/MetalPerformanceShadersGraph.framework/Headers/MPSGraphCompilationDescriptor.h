// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSGRAPHCOMPILATIONDESCRIPTOR_H
#define MPSGRAPHCOMPILATIONDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphCompilationDescriptor : NSObject <NSCopying>



@property NSUInteger aneCompilerSpatialSplitting; // ivar: _aneCompilerSpatialSplitting
@property BOOL compileANEInMemory; // ivar: _compileANEInMemory
@property NSUInteger compilerOptions; // ivar: _compilerOptions
@property (nonatomic) NSUInteger optimizationLevel; // ivar: _optimizationLevel
@property (nonatomic) NSUInteger optimizationProfile; // ivar: _optimizationProfile


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)disableTypeInference;
-(void)enableDevicePlacement;
-(void)enableFileBackedConstants;


@end


#endif