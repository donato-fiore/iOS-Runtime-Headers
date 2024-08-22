// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLNLPWORDTAGGINGMODEL_H
#define _MLNLPWORDTAGGINGMODEL_H

@protocol MLCustomModel;

#import <Foundation/Foundation.h>

#import "MLModelDescription.h"

@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel>

 {
    *void _wordTaggingModel;
}


@property (retain) MLModelDescription *modelDescription; // ivar: _modelDescription


-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif