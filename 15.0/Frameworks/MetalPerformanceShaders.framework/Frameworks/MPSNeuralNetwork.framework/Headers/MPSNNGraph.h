// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNGRAPH_H
#define MPSNNGRAPH_H

@class MPSKernel, NSArray;
@protocol NSCopying, NSSecureCoding, MPSImageAllocator, MPSHandle;



@interface MPSNNGraph : MPSKernel <NSCopying, NSSecureCoding>

 {
    Graph _graph;
    BOOL _resultIsNeeded;
}


@property (retain, nonatomic) NSObject<MPSImageAllocator> *destinationImageAllocator; // ivar: _destinationImageAllocator
@property (nonatomic) NSUInteger format; // ivar: _format
@property (readonly, copy, nonatomic) NSArray *intermediateImageHandles;
@property (nonatomic) BOOL outputStateIsTemporary; // ivar: _outputStateIsTemporary
@property (readonly, nonatomic) NSObject<MPSHandle> *resultHandle;
@property (readonly, nonatomic) BOOL resultImageIsNeeded;
@property (readonly, copy, nonatomic) NSArray *resultStateHandles;
@property (readonly, copy, nonatomic) NSArray *sourceImageHandles;
@property (readonly, copy, nonatomic) NSArray *sourceStateHandles;


+(id)graphWithDevice:(id)arg0 resultImage:(id)arg1 ;
+(id)graphWithDevice:(id)arg0 resultImage:(id)arg1 resultImageIsNeeded:(BOOL)arg2 ;
+(id)graphWithDevice:(id)arg0 resultImages:(id)arg1 resultsAreNeeded:(*BOOL)arg2 ;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)readCountForSourceImageAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)readCountForSourceStateAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 intermediateImages:(id)arg3 destinationStates:(id)arg4 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImages:(id)arg1 sourceStates:(id)arg2 intermediateImages:(id)arg3 destinationStates:(id)arg4 ;
-(id)executeAsyncWithSourceImages:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 resultImage:(id)arg1 ;
-(id)initWithDevice:(id)arg0 resultImage:(id)arg1 resultImageIsNeeded:(BOOL)arg2 ;
-(id)initWithDevice:(id)arg0 resultImages:(id)arg1 resultsAreNeeded:(*BOOL)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadFromDataSources;
-(void)setOptions:(NSUInteger)arg0 ;


@end


#endif