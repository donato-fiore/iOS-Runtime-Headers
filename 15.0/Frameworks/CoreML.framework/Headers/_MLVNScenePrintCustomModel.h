// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MLVNSCENEPRINTCUSTOMMODEL_H
#define _MLVNSCENEPRINTCUSTOMMODEL_H

@protocol MLCustomModel;

#import <Foundation/Foundation.h>

#import "MLModelConfiguration.h"
#import "MLModelDescription.h"

@interface _MLVNScenePrintCustomModel : NSObject <MLCustomModel>



@property (readonly, nonatomic) MLModelConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) MLModelDescription *modelDescription; // ivar: _modelDescription
@property (readonly, nonatomic) NSUInteger scenePrintRequestRevision; // ivar: _scenePrintRequestRevision


-(id)featureValueFromScenePrint:(id)arg0 elementSize:(NSUInteger)arg1 ;
-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif