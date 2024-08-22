// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRINTERMEDIATEDETECTORRESULT_H
#define CRINTERMEDIATEDETECTORRESULT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRIntermediateDetectorResult : NSObject

@property (retain, nonatomic) NSMutableArray *pyramidPostInterScaleNMSTextFeatures; // ivar: _pyramidPostInterScaleNMSTextFeatures
@property (retain, nonatomic) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures; // ivar: _pyramidPostIntraScaleNMSTextFeatures
@property (retain, nonatomic) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures; // ivar: _pyramidPreIntraScaleNMSTextFeatures
@property (retain, nonatomic) NSMutableArray *pyramidScaleSize; // ivar: _pyramidScaleSize


-(id)initWithNumberOfScales:(NSInteger)arg0 ;


@end


#endif