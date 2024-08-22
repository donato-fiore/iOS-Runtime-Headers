// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SNLOGMELSPECTROGRAMCUSTOMMODEL_H
#define _SNLOGMELSPECTROGRAMCUSTOMMODEL_H

@class NSString;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface _SNLogMelSpectrogramCustomModel : NSObject <MLCustomModel>

 {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    SNLogMelParameters _logMelExtractionParameters;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif