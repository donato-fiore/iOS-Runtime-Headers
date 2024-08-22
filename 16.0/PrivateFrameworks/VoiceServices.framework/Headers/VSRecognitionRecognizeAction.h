// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSRECOGNITIONRECOGNIZEACTION_H
#define VSRECOGNITIONRECOGNIZEACTION_H

@class NSString, NSArray;


#import "VSRecognitionAction.h"

@interface VSRecognitionRecognizeAction : VSRecognitionAction {
    NSString *_modelIdentifier;
    NSArray *_keywords;
    *void _recognition;
    NSArray *_results;
    NSString *_debugDumpPath;
    NSString *_audioInputPath;
    CGFloat _levelInterval;
    ? _recognizeFlags;
}




-(BOOL)_hasDeferredStartCallback;
-(BOOL)_isActivelyRecognizing;
-(BOOL)_isRecognizing;
-(BOOL)_keywordIndexChanged;
-(BOOL)_setAudioInputPath:(id)arg0 ;
-(BOOL)_setBluetoothInputAllowed:(BOOL)arg0 ;
-(BOOL)_setDebugDumpEnabled:(BOOL)arg0 ;
-(BOOL)_setDebugDumpEnabled:(BOOL)arg0 dumpPath:(id)arg1 ;
-(BOOL)_setDebugDumpPath:(id)arg0 ;
-(BOOL)_setEngineResetRequired:(BOOL)arg0 ;
-(BOOL)_setInputLevelUpdateInterval:(CGFloat)arg0 ;
-(BOOL)_setPreferredEngine:(int)arg0 ;
-(NSInteger)_keywordCount;
-(float)_inputLevel;
-(float)_inputLevelDB;
-(id)_actionForEmptyResults;
-(id)_debugDumpPath;
-(id)_keywordAtIndex:(NSInteger)arg0 ;
-(id)_keywords;
-(id)cancel;
-(id)initWithModelIdentifier:(id)arg0 ;
-(id)modelIdentifier;
-(id)perform;
-(int)completionType;
-(struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(struct ? *)arg0 info:(*void)arg1 ;
-(void)_configureNewRecognitionInstance;
-(void)_continueAfterDeferredStart;
-(void)_handleRecognitionCompleted:(struct __VSRecognition *)arg0 withResults:(struct __CFArray *)arg1 error:(struct __CFError *)arg2 ;
-(void)_handleRecognitionPrepared:(struct __VSRecognition *)arg0 ;
-(void)_handleRecognitionStarted:(struct __VSRecognition *)arg0 ;
-(void)_handledThreadedResults:(id)arg0 nextAction:(id)arg1 ;
-(void)_releaseFromPrepare;
-(void)_reset;
-(void)_setResults:(id)arg0 ;
-(void)dealloc;


@end


#endif