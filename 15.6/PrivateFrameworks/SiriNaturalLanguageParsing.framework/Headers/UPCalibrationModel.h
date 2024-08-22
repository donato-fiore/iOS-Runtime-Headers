// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UPCALIBRATIONMODEL_H
#define UPCALIBRATIONMODEL_H


#import <Foundation/Foundation.h>

#import "UPLoadedModelConfiguration.h"
#import "UPSystemConfiguration.h"

@interface UPCalibrationModel : NSObject

@property (readonly, nonatomic) UPLoadedModelConfiguration *_loadedModelConfiguration; // ivar: __loadedModelConfiguration
@property (readonly, nonatomic) UPSystemConfiguration *_systemConfiguration; // ivar: __systemConfiguration


+(id)modelWithSystemConfiguration:(id)arg0 loadedModelConfiguration:(id)arg1 error:(*id)arg2 ;
-(CGFloat)forwardWithSpanLabels:(struct UPGenericTensor )arg0 embeddings:(struct UPGenericTensor )arg1 utterance:(id)arg2 ;
-(id)initWithSystemConfiguration:(id)arg0 loadedModelConfiguration:(id)arg1 ;
-(id)scoreFromQuery:(id)arg0 preprocessorOutput:(id)arg1 error:(*id)arg2 ;


@end


#endif