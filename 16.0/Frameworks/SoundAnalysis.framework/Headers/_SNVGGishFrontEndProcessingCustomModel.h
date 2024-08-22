// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SNVGGISHFRONTENDPROCESSINGCUSTOMMODEL_H
#define _SNVGGISHFRONTENDPROCESSINGCUSTOMMODEL_H

@protocol MLCustomModel;

#import <Foundation/Foundation.h>

#import "SNDSPGraphCustomModel.h"

@interface _SNVGGishFrontEndProcessingCustomModel : NSObject <MLCustomModel>

 {
    SNDSPGraphCustomModel *_model;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif