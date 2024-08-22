// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETIMAGEFOLDERDATAPROVIDER_H
#define ETIMAGEFOLDERDATAPROVIDER_H

@class NSString, NSArray;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>

#import "ETImagePreprocessor.h"

@interface ETImageFolderDataProvider : NSObject <ETDataProvider>

 {
    vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> samples;
    vector<NSString *, std::allocator<NSString *>> classes;
    shared_ptr<Espresso::blob_cpu> labelBlob;
    NSString *imageTensorName;
    NSString *labelTensorName;
    NSArray *labelShape;
    linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomgen;
    ETImagePreprocessor *imageProcessor;
    BOOL shuffleBeforeEpoch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)numberOfDataPoints;
-(id)dataPointAtIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithFolder:(id)arg0 forImageTensor:(id)arg1 andLabelTensor:(id)arg2 shuffleBeforeEachEpoch:(BOOL)arg3 shuffleRandomSeed:(id)arg4 withImagePreprocessParams:(id)arg5 ;
-(void)prepareForEpoch;


@end


#endif