// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFLTRAINING_H
#define PFLTRAINING_H


#import <Foundation/Foundation.h>


@interface PFLTraining : NSObject



-(id)createDataSourceForRecipe:(id)arg0 attachments:(id)arg1 recordDatas:(id)arg2 recordInfos:(id)arg3 error:(*id)arg4 ;
-(id)createEvaluatorForModelType:(id)arg0 newAPI:(BOOL)arg1 error:(*id)arg2 ;
-(id)loadRecordsForRecordSet:(id)arg0 ;
-(id)runTask:(id)arg0 recordSet:(id)arg1 error:(*id)arg2 ;
-(id)taskResultFromDict:(id)arg0 newAPI:(BOOL)arg1 ;


@end


#endif