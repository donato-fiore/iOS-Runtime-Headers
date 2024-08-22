// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTDEBUGLOGENTRYRERUN_H
#define PKTEXTINPUTDEBUGLOGENTRYRERUN_H

@class NSString;
@protocol PKTextInputRecognitionManagerDataSource;

#import <Foundation/Foundation.h>

#import "PKTextInputRecognitionManager.h"
#import "PKTextInputLanguageSpec.h"
#import "PKTextInputStrokeProvider.h"
#import "PKTextInputDebugArchivedLogEntry.h"

@interface PKTextInputDebugLogEntryRerun : NSObject <PKTextInputRecognitionManagerDataSource>

 {
    PKTextInputRecognitionManager *_recognitionManager;
    id *_completionBlock;
    PKTextInputLanguageSpec *_languageSpec;
    PKTextInputStrokeProvider *_strokeProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKTextInputDebugArchivedLogEntry *logEntry; // ivar: _logEntry
@property (readonly) Class superclass;


-(id)initWithLogEntry:(id)arg0 ;
-(id)recognitionManager:(id)arg0 textInputTargetForItemStableIdentifier:(id)arg1 strokeIdentifiers:(id)arg2 simultaneousItemStableIdentifiers:(id)arg3 ;
-(id)recognitionManagerStrokeProvider:(id)arg0 ;
-(id)recognitionManagerTextInputTargets:(id)arg0 ;
-(void)_finishRerunWithQueryItems:(id)arg0 error:(id)arg1 ;
-(void)recognitionManager:(id)arg0 fetchContentInfoForTextInputTarget:(id)arg1 strokeIdentifiers:(id)arg2 completion:(id)arg3 ;
-(void)recognitionManager:(id)arg0 recognitionDidFinishWithQueryItems:(id)arg1 duration:(CGFloat)arg2 ;
-(void)runWithCompletion:(id)arg0 ;


@end


#endif