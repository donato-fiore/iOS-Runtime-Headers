// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLCOMPUTEDATASOURCE_H
#define MLCOMPUTEDATASOURCE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MLComputeDataSource : NSObject

@property (readonly, nonatomic) NSDictionary *dataDictionary; // ivar: _dataDictionary


-(id)dataCHWFromChanneledPixelType:(struct __CVBuffer *)arg0 channelOrderIsBGR:(BOOL)arg1 error:(*id)arg2 ;
-(id)dataCHWFromPixelBuffer:(struct __CVBuffer *)arg0 channelOrderIsBGR:(BOOL)arg1 error:(*id)arg2 ;
-(id)dataCHWFromPixelTypeGray8:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)initWithFeatureProvider:(id)arg0 forPrediction:(BOOL)arg1 neuralNetworkEngine:(id)arg2 error:(*id)arg3 ;
-(id)oneHotEncodedDataFromFeatureValue:(id)arg0 withNNEngine:(id)arg1 error:(*id)arg2 ;


@end


#endif