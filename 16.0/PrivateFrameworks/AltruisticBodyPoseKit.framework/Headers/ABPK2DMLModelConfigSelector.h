// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPK2DMLMODELCONFIGSELECTOR_H
#define ABPK2DMLMODELCONFIGSELECTOR_H


#import <Foundation/Foundation.h>


@interface ABPK2DMLModelConfigSelector : NSObject



+(id)getModelWithNetworkConfig:(id)arg0 ;
+(struct CGSize )inputDimensionsForModelWithABPKNetworkConfig:(id)arg0 ;
+(struct CGSize )inputDimensionsForModelWithNetworkConfig:(id)arg0 ;


@end


#endif