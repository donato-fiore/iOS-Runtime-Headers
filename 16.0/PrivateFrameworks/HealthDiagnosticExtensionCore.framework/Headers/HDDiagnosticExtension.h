// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDIAGNOSTICEXTENSION_H
#define HDDIAGNOSTICEXTENSION_H

@class DEExtensionProvider, NSMutableString, NSURL;
@protocol HDDiagnosticOperationDelegate;



@interface HDDiagnosticExtension : DEExtensionProvider <HDDiagnosticOperationDelegate>

 {
    CGFloat _captureStartTime;
    int _contentProtectionNotifyToken;
    os_unfair_lock_s _logLock;
}


@property (readonly, nonatomic) BOOL allowsSensitiveAttachments; // ivar: _allowsSensitiveAttachments
@property (retain, nonatomic) NSMutableString *collectionLog; // ivar: _collectionLog
@property (readonly, copy, nonatomic) NSURL *temporaryDirectoryURL; // ivar: _temporaryDirectoryURL


-(BOOL)_captureLog;
-(id)_currentProtectionStateString;
-(id)_generateTemporaryAttachmentDirectory;
-(id)attachmentsForParameters:(id)arg0 ;
-(id)init;
-(void)_beginMonitoringForContentProtectionStatus;
-(void)_endMonitoringForContentProtectionStatus;
-(void)_log:(id)arg0 ;
-(void)diagnosticOperation:(id)arg0 logMessage:(id)arg1 ;


@end


#endif