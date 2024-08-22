// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNITIONSESSIONTEXTINPUTTASK_H
#define CHRECOGNITIONSESSIONTEXTINPUTTASK_H

@class NSArray;
@protocol CHRecognitionSessionTextInputTaskDelegate;


#import "CHRecognitionSessionTask.h"
#import "CHTextInputQuery.h"

@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask

@property (retain, nonatomic) CHTextInputQuery *activeTextInputQuery; // ivar: _activeTextInputQuery
@property (nonatomic) NSObject<CHRecognitionSessionTextInputTaskDelegate> *delegate;
@property (readonly, nonatomic) NSArray *initialTextInputTargets; // ivar: _initialTextInputTargets


+(id)lastStrokeInGroup:(id)arg0 strokeProvider:(id)arg1 ;
+(struct CGRect )_contextBoundsForTargetContentInfo:(id)arg0 ;
-(id)_dataSource:(id)arg0 inputTargetContentInfoForStrokeGroups:(id)arg1 groupingManager:(id)arg2 ;
-(id)_dataSource:(id)arg0 textInputTargetForStrokeGroup:(id)arg1 simultaneousGroups:(id)arg2 ;
-(id)_textCorrectionResultForStrokeGroup:(id)arg0 groupingManager:(id)arg1 targetContentInfo:(id)arg2 locales:(id)arg3 previousCorrectionResult:(id)arg4 ;
-(id)clutterFilter;
-(id)initWithLocales:(id)arg0 preferredLocales:(id)arg1 strokeProvider:(id)arg2 inputResult:(id)arg3 recognitionQOSClass:(unsigned int)arg4 ;
-(id)initWithLocales:(id)arg0 strokeProvider:(id)arg1 initialTextInputTargets:(id)arg2 inputResult:(id)arg3 recognitionEnvironment:(NSInteger)arg4 ;
-(id)newGroupingManager;
-(id)newStrokeClassifier;
-(id)recognitionResultsForGroupingResult:(id)arg0 groupingManager:(id)arg1 ;
-(id)textCorrectionResultsForGroupingResult:(id)arg0 groupingManager:(id)arg1 ;


@end


#endif