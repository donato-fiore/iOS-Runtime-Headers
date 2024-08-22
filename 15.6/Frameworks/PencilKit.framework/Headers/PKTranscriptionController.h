// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTRANSCRIPTIONCONTROLLER_H
#define PKTRANSCRIPTIONCONTROLLER_H

@class NSProgress, NSString;
@protocol PKProgressAlertControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKAttachmentView.h"
#import "PKProgressAlertController.h"
#import "PKRecognitionSessionManager.h"
#import "PKStrokeSelection.h"

@interface PKTranscriptionController : NSObject <PKProgressAlertControllerDelegate>



@property (weak, nonatomic) PKAttachmentView *attachment; // ivar: _attachment
@property (retain, nonatomic) NSProgress *currentProgress; // ivar: _currentProgress
@property (nonatomic) BOOL didReceiveTranscription; // ivar: _didReceiveTranscription
@property (nonatomic) BOOL didShowHUD; // ivar: _didShowHUD
@property (retain, nonatomic) PKProgressAlertController *progressAlertController; // ivar: _progressAlertController
@property (weak, nonatomic) PKRecognitionSessionManager *recognitionManager; // ivar: _recognitionManager
@property (nonatomic) BOOL shouldCancel; // ivar: _shouldCancel
@property (retain, nonatomic) PKStrokeSelection *strokeSelection; // ivar: _strokeSelection
@property (copy, nonatomic) NSString *textTranscription; // ivar: _textTranscription
@property (nonatomic) int transcriptionType; // ivar: _transcriptionType


-(id)_fetchTranscriptionWithCompletion:(id)arg0 ;
-(id)initWithRecognitionManager:(id)arg0 strokeSelection:(id)arg1 attachment:(id)arg2 ;
-(void)_hideHUD;
-(void)_progressChanged;
-(void)_showHUDWithProgress:(id)arg0 ;
-(void)_unregisterProgressObserver;
-(void)alertControllerDidCancel:(id)arg0 ;
-(void)cancelAndTeardown;
-(void)dealloc;
-(void)findTranscriptionForType:(int)arg0 withCompletion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)textInputDidChange:(id)arg0 ;


@end


#endif