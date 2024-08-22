// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODCURAREINTERFACEMODULE_H
#define ODCURAREINTERFACEMODULE_H


#import <Foundation/Foundation.h>

#import "ODCurareInterfaceModuleInternal.h"

@interface ODCurareInterfaceModule : NSObject

@property (readonly) ODCurareInterfaceModuleInternal *underlyingObject; // ivar: _underlyingObject


-(BOOL)evaluateModelsWithEvaluationModels:(id)arg0 error:(*id)arg1 ;
-(BOOL)personalizeModelsWithPersonalizableModels:(id)arg0 personalizationPolicy:(id)arg1 error:(*id)arg2 ;
-(id)getSelectedModelWithDefaultModel:(id)arg0 selectionPolicy:(id)arg1 error:(*id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 evaluationInstance:(id)arg1 personalizationInstance:(id)arg2 pruningPolicy:(id)arg3 error:(*id)arg4 ;
-(void)generateCAReportAndReturnError:(*id)arg0 ;


@end


#endif