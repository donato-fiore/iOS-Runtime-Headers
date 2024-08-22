// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPCALIBRATIONMODEL_H
#define UPCALIBRATIONMODEL_H


#import <Foundation/Foundation.h>

#import "UPLoadedModelConfiguration.h"

@interface UPCalibrationModel : NSObject

@property (readonly, nonatomic) UPLoadedModelConfiguration *_loadedModelConfiguration; // ivar: __loadedModelConfiguration


+(id)modelWithLoadedModelConfiguration:(id)arg0 error:(*id)arg1 ;
-(CGFloat)forwardWithSpanLabels:(struct UPGenericTensor )arg0 embeddings:(struct UPGenericTensor )arg1 utterance:(id)arg2 ;
-(id)initWithLoadedModelConfiguration:(id)arg0 ;
-(id)scoreFromQuery:(id)arg0 preprocessorOutput:(id)arg1 error:(*id)arg2 ;


@end


#endif