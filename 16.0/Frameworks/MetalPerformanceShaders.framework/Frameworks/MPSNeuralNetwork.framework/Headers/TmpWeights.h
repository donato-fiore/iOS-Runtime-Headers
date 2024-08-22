// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TMPWEIGHTS_H
#define TMPWEIGHTS_H

@class NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>

#import "MPSCNNConvolutionDescriptor.h"

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource>

 {
    id<MPSCNNConvolutionDataSource> *_parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    BOOL _hasBias;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptor;
-(id)initWithWeights:(id)arg0 useBias:(BOOL)arg1 desc:(id)arg2 ;
-(id)label;
-(unsigned int)dataType;
-(void)dealloc;
-(void)purge;


@end


#endif