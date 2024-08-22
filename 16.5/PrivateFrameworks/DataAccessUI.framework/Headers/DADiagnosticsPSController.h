// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DADIAGNOSTICSPSCONTROLLER_H
#define DADIAGNOSTICSPSCONTROLLER_H

@class PSListController, UIAlertView, NSString;
@protocol DADiagnosticSaveNotesDelegate, UIAlertViewDelegate;



@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate>

 {
    UIAlertView *_simpleAlert;
    UIAlertView *_savingDataAlert;
    SEL _simpleConfirmSheetDismissedSEL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)diagnosticsVisible;
+(id)dumpRuntimeStateSpecifiers;
+(id)linkSpecifier;
-(BOOL)isLoggingEnabledForSpecifier:(id)arg0 ;
-(BOOL)saveFileAtPath:(id)arg0 toDirectory:(id)arg1 withExtension:(id)arg2 error:(*id)arg3 ;
-(id)booleanPropertyWithSpecifier:(id)arg0 ;
-(id)diagnosticSpecifiers;
-(id)pathsOfAllLogFiles;
-(id)pathsOfPurgableFiles;
-(id)savedLogsDirectoryNameForSpecifier:(id)arg0 ;
-(id)specifiers;
-(void)_dismissSavingDataAlert;
-(void)_presentNotesController;
-(void)alertView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)handleClearAllLogsForSpecifier:(id)arg0 ;
-(void)handleDumpRuntimeStateForSpecifier:(id)arg0 ;
-(void)handleSaveAllLogsForSpecifier:(id)arg0 ;
-(void)handleSaveAllLogsStep2;
-(void)purgeFileAtPath:(id)arg0 ;
-(void)runSimpleAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)runSimpleAlertWithTitle:(id)arg0 message:(id)arg1 dismissedSelector:(SEL)arg2 ;
-(void)saveLogsWithNotes:(id)arg0 ;
-(void)saveNotesInBackground:(id)arg0 ;
-(void)setBooleanProperty:(id)arg0 withSpecifier:(id)arg1 ;
-(void)setLoggingEnabled:(BOOL)arg0 forSpecifier:(id)arg1 ;
-(void)suspend;


@end


#endif