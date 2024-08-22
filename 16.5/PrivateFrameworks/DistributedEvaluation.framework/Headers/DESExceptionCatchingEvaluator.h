// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESEXCEPTIONCATCHINGEVALUATOR_H
#define DESEXCEPTIONCATCHINGEVALUATOR_H

@class NSString;
@protocol DESRecipeEvaluation;

#import <Foundation/Foundation.h>


@interface DESExceptionCatchingEvaluator : NSObject <DESRecipeEvaluation>

 {
    id<DESRecipeEvaluation> *_evaluator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldDownloadAttachmentWithURL:(id)arg0 recipe:(id)arg1 recordInfo:(id)arg2 ;
-(id)evaluateRecipe:(id)arg0 matchingRecordSet:(id)arg1 binaryResult:(*id)arg2 error:(*id)arg3 ;
-(id)evaluateRecipe:(id)arg0 matchingRecordSet:(id)arg1 error:(*id)arg2 ;
-(id)evaluateRecipe:(id)arg0 recordInfo:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 error:(*id)arg4 ;
-(id)initWithEvaluator:(id)arg0 ;
-(id)serverSafeRecordInfoWithRecordInfo:(id)arg0 ;
-(id)telemetryWithRecordSet:(id)arg0 ;
-(void)performEvaluation:(id)arg0 ;


@end


#endif