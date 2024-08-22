// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNITIONSESSIONTASK_H
#define CHRECOGNITIONSESSIONTASK_H

@class NSSet, NSArray;
@protocol OS_dispatch_queue, CHRecognitionSessionTaskDelegate, CHStrokeProvider;

#import <Foundation/Foundation.h>

#import "CHRecognitionSessionResult.h"
#import "CHStrokeClassificationModel.h"

@interface CHRecognitionSessionTask : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_recognizersQueue; // ivar: __recognizersQueue
@property BOOL cancelled; // ivar: _cancelled
@property (nonatomic) NSObject<CHRecognitionSessionTaskDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSSet *forceRecognitionStrokeGroupIdentifiers; // ivar: _forceRecognitionStrokeGroupIdentifiers
@property (readonly, nonatomic) CHRecognitionSessionResult *inputResult; // ivar: _inputResult
@property (readonly, nonatomic) BOOL isHighResponsivenessTask; // ivar: _isHighResponsivenessTask
@property (retain, nonatomic, setter=_setOutputResult:) CHRecognitionSessionResult *outputResult; // ivar: _outputResult
@property (copy, nonatomic) id *partialResultBlock; // ivar: _partialResultBlock
@property (readonly, copy, nonatomic) NSArray *preferredLocales; // ivar: _preferredLocales
@property (readonly, nonatomic) NSInteger recognitionEnvironment; // ivar: _recognitionEnvironment
@property (readonly, copy, nonatomic) NSArray *recognitionLocales; // ivar: _recognitionLocales
@property (nonatomic) BOOL saveInputDrawings; // ivar: _saveInputDrawings
@property (nonatomic, setter=_setStatus:) NSInteger status; // ivar: _status
@property (readonly, nonatomic) CHStrokeClassificationModel *strokeClassificationModel; // ivar: _strokeClassificationModel
@property (nonatomic) BOOL strokeGroupingOnly; // ivar: _strokeGroupingOnly
@property (readonly, nonatomic) NSInteger strokeGroupingRequirement; // ivar: _strokeGroupingRequirement
@property (readonly, nonatomic) NSObject<CHStrokeProvider> *strokeProvider; // ivar: _strokeProvider
@property (readonly, nonatomic) NSArray *subjectStrokeIdentifiers; // ivar: _subjectStrokeIdentifiers


-(BOOL)_isTransitionValidFromStatus:(NSInteger)arg0 toStatus:(NSInteger)arg1 ;
-(id)_recognitionResultsForNonTextStrokeGroup:(id)arg0 groupingManager:(id)arg1 ;
-(id)_textRecognitionResultsForTextStrokeGroup:(id)arg0 groupingManager:(id)arg1 ;
-(id)_tokenizedTextResultForDrawing:(id)arg0 usingRecognizer:(id)arg1 isRemoteRecognizer:(BOOL)arg2 locale:(id)arg3 strokeLimit:(NSInteger)arg4 recognitionError:(*id)arg5 ;
-(id)clutterFilter;
-(id)init;
-(id)initWithLocales:(id)arg0 preferredLocales:(id)arg1 strokeProvider:(id)arg2 inputResult:(id)arg3 recognitionQOSClass:(unsigned int)arg4 recognitionEnvironment:(NSInteger)arg5 ;
-(id)initWithLocales:(id)arg0 preferredLocales:(id)arg1 strokeProvider:(id)arg2 inputResult:(id)arg3 recognitionQOSClass:(unsigned int)arg4 recognitionEnvironment:(NSInteger)arg5 isHighResponsivenessTask:(BOOL)arg6 strokeClassificationModel:(id)arg7 strokeGroupingRequirement:(NSInteger)arg8 partialResultBlock:(id)arg9 ;
-(id)initWithLocales:(id)arg0 preferredLocales:(id)arg1 strokeProvider:(id)arg2 inputResult:(id)arg3 recognitionQOSClass:(unsigned int)arg4 recognitionEnvironment:(NSInteger)arg5 isHighResponsivenessTask:(BOOL)arg6 strokeClassificationModel:(id)arg7 strokeGroupingRequirement:(NSInteger)arg8 subjectStrokeIdentifiers:(id)arg9 partialResultBlock:(id)arg10 ;
-(id)newGroupingManager;
-(id)newStrokeClassifier;
-(id)recognitionResultsForGroupingResult:(id)arg0 groupingManager:(id)arg1 ;
-(id)textCorrectionResultsForGroupingResult:(id)arg0 groupingManager:(id)arg1 ;
-(void)_logResultsIfAppropriateWithStrokeProvider:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif