// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICSCONTROLLER_H
#define DIAGNOSTICSCONTROLLER_H

@class NSMutableDictionary, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "DiagnosticExtensionController.h"

@interface DiagnosticsController : NSObject {
    DiagnosticExtensionController *deCollector;
}


@property (retain, nonatomic) NSMutableDictionary *actionsDict; // ivar: _actionsDict
@property (retain, nonatomic) NSNumber *autoBugCaptureGID; // ivar: _autoBugCaptureGID
@property (retain, nonatomic) NSString *autoBugCapturePath; // ivar: _autoBugCapturePath
@property (retain, nonatomic) NSNumber *autoBugCaptureUID; // ivar: _autoBugCaptureUID
@property (retain, nonatomic) NSMutableDictionary *settingsDict; // ivar: _settingsDict


+(id)loggingStateCache;
+(void)initialize;
-(BOOL)_loadLoggingSupport;
-(BOOL)validateActionsDictionary:(id)arg0 ;
-(BOOL)validateActionsDictionaryContent:(id)arg0 identifier:(id)arg1 ;
-(BOOL)validateDiagnosticsConfiguration:(id)arg0 ;
-(BOOL)validateOSLogPreferencesProtocol:(id)arg0 ;
-(BOOL)validateSettingsDictionary:(id)arg0 ;
-(BOOL)validateSettingsNodeContents:(id)arg0 identifier:(id)arg1 ;
-(BOOL)validateSettingsNodeDictionary:(id)arg0 identifier:(id)arg1 isDefault:(BOOL)arg2 ;
-(NSUInteger)collectDignosticExtensionFilesForDiagnosticCase:(id)arg0 parameters:(id)arg1 options:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(id)actionsDictionaryForProcess:(id)arg0 logLevel:(id)arg1 diagnosticExtensions:(id)arg2 ;
-(id)consolidatedLogLevelSetsFromActions:(id)arg0 ;
-(id)defaultsDictionaryWithAlwaysRunActions:(id)arg0 ;
-(id)diagActionsForSignature:(id)arg0 ;
-(id)diagActionsForSignature:(id)arg0 commonActions:(id)arg1 ;
-(id)diagExtensionCollector;
-(id)diagnosticExtensionsForDiagnosticCase:(id)arg0 enableCommonActions:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)applyLogLevel:(id)arg0 forIdentifier:(id)arg1 logSettingType:(NSUInteger)arg2 ;
-(void)applyLogLevelSets:(id)arg0 ;
-(void)configureWithDiagnosticActions:(id)arg0 ;
-(void)consolidateLoggingLevelsIntoSet:(id)arg0 withCurrentState:(id)arg1 ;
-(void)dealloc;
-(void)lowerLoggingForDiagnosticCase:(id)arg0 ;
-(void)lowerLoggingForIdentifier:(id)arg0 ;
-(void)raiseLoggingForActions:(id)arg0 identifier:(id)arg1 ;
-(void)raiseLoggingForDiagnosticCase:(id)arg0 ;


@end


#endif