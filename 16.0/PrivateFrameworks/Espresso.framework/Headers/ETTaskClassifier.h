// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETTASKCLASSIFIER_H
#define ETTASKCLASSIFIER_H

@class NSArray;


#import "ETTask.h"

@interface ETTaskClassifier : ETTask

@property NSArray *class_names; // ivar: _class_names


-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 extractor:(id)arg2 ;
-(id)initWithModelDef:(id)arg0 optimizerDef:(id)arg1 extractor:(id)arg2 needWeightsInitialization:(BOOL)arg3 ;


@end


#endif