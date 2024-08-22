// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSGRAPHCOMPILATIONDESCRIPTOR_H
#define MPSGRAPHCOMPILATIONDESCRIPTOR_H

@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPSGraphCompilationDescriptor : NSObject <NSCopying>



@property NSUInteger aneCompilerSpatialSplitting; // ivar: _aneCompilerSpatialSplitting
@property (copy) id *compilationCompletionHandler; // ivar: _compilationCompletionHandler
@property BOOL compileANEInMemory; // ivar: _compileANEInMemory
@property NSUInteger compilerOptions; // ivar: _compilerOptions
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger optimizationLevel; // ivar: _optimizationLevel
@property (nonatomic) NSUInteger optimizationProfile; // ivar: _optimizationProfile
@property BOOL printANEPlacementAnalysis; // ivar: _printANEPlacementAnalysis
@property (nonatomic) BOOL waitForCompilationCompletion; // ivar: _waitForCompilationCompletion


-(BOOL)isEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> )getNamedAttrArray:(*void)arg0 device:(id)arg1 ;
-(void)disableTypeInference;
-(void)enableDevicePlacement;
-(void)enableFileBackedConstants;


@end


#endif