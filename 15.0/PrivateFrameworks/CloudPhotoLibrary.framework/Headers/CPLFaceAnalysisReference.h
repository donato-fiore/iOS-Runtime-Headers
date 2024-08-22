// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLFACEANALYSISREFERENCE_H
#define CPLFACEANALYSISREFERENCE_H

@class NSArray;


#import "CPLFaceAnalysis.h"

@interface CPLFaceAnalysisReference : CPLFaceAnalysis

@property (copy, nonatomic) NSArray *faces;


-(void)addFace:(id)arg0 ;
-(void)addFaces:(id)arg0 ;


@end


#endif