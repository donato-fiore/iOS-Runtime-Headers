// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXVALIDATIONMANAGER_H
#define AXVALIDATIONMANAGER_H

@class NSMutableArray, NSString;
@protocol AXValidationReportingServices;

#import <Foundation/Foundation.h>


@interface AXValidationManager : NSObject

@property (retain, nonatomic) NSMutableArray *consoleErrorMessages; // ivar: _consoleErrorMessages
@property (retain, nonatomic) NSMutableArray *consoleWarningMessages; // ivar: _consoleWarningMessages
@property (nonatomic, getter=isDebugBuild) BOOL debugBuild; // ivar: _debugBuild
@property (nonatomic) BOOL forceDoNotReport; // ivar: _forceDoNotReport
@property (nonatomic) NSUInteger numberOfValidationErrors; // ivar: _numberOfValidationErrors
@property (nonatomic) NSUInteger numberOfValidationWarnings; // ivar: _numberOfValidationWarnings
@property (nonatomic) NSUInteger numberOfValidations; // ivar: _numberOfValidations
@property (copy, nonatomic) NSString *overrideProcessName; // ivar: _overrideProcessName
@property (nonatomic) BOOL shouldCrashOnError; // ivar: _shouldCrashOnError
@property (nonatomic) BOOL shouldLogToConsole; // ivar: _shouldLogToConsole
@property (nonatomic) BOOL shouldPerformValidationChecks; // ivar: _shouldPerformValidationChecks
@property (nonatomic) BOOL shouldReportToServer; // ivar: _shouldReportToServer
@property (retain, nonatomic) NSObject<AXValidationReportingServices> *validationReportingServices; // ivar: _validationReportingServices
@property (copy, nonatomic) NSString *validationTargetName; // ivar: _validationTargetName


+(id)sharedInstance;
-(BOOL)_client:(id)arg0 validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char *)arg3 argList:(char *)arg4 ;
-(BOOL)_client:(id)arg0 validateClass:(id)arg1 hasMethod:(id)arg2 methodType:(int)arg3 ;
-(BOOL)_client:(id)arg0 validateClass:(id)arg1 hasMethod:(id)arg2 methodType:(int)arg3 returnType:(id)arg4 arguments:(id)arg5 ;
-(BOOL)_client:(id)arg0 validateClass:(id)arg1 hasSwiftField:(id)arg2 withTypeString:(char *)arg3 isAnyClass:(BOOL)arg4 ;
-(BOOL)_client:(id)arg0 validateStruct:(id)arg1 hasSwiftField:(id)arg2 withTypeString:(char *)arg3 isAnyClass:(BOOL)arg4 ;
-(BOOL)_client:(id)arg0 validateSwiftEnum:(id)arg1 hasCase:(id)arg2 withTypeString:(char *)arg3 isAnyClass:(BOOL)arg4 ;
-(BOOL)_client:(id)arg0 validateType:(id)arg1 hasSwiftField:(id)arg2 handleSwiftValidationProblems:(id)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 conformsToProtocol:(id)arg2 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasClassMethod:(id)arg2 withFullSignature:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasInstanceMethod:(id)arg2 withFullSignature:(char *)arg3 argList:(char *)arg4 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasInstanceVariable:(id)arg2 withType:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasProperty:(id)arg2 customGetter:(id)arg3 customSetter:(id)arg4 withType:(char *)arg5 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasProperty:(id)arg2 withType:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasSwiftField:(id)arg2 withSwiftType:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 hasSwiftFieldOfAnyClass:(id)arg2 ;
-(BOOL)client:(id)arg0 validateClass:(id)arg1 isKindOfClass:(id)arg2 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 conformsToProtocol:(id)arg2 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 hasMethod:(id)arg2 isInstanceMethod:(BOOL)arg3 isRequired:(BOOL)arg4 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 hasOptionalClassMethod:(id)arg2 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 hasOptionalInstanceMethod:(id)arg2 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 hasRequiredClassMethod:(id)arg2 ;
-(BOOL)client:(id)arg0 validateProtocol:(id)arg1 hasRequiredInstanceMethod:(id)arg2 ;
-(BOOL)client:(id)arg0 validateSwiftEnum:(id)arg1 ;
-(BOOL)client:(id)arg0 validateSwiftEnum:(id)arg1 hasCase:(id)arg2 ;
-(BOOL)client:(id)arg0 validateSwiftEnum:(id)arg1 hasCase:(id)arg2 withSwiftType:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateSwiftEnum:(id)arg1 hasCaseOfAnyClass:(id)arg2 ;
-(BOOL)client:(id)arg0 validateSwiftStruct:(id)arg1 ;
-(BOOL)client:(id)arg0 validateSwiftStruct:(id)arg1 hasSwiftField:(id)arg2 withSwiftType:(char *)arg3 ;
-(BOOL)client:(id)arg0 validateSwiftStruct:(id)arg1 hasSwiftFieldOfAnyClass:(id)arg2 ;
-(BOOL)installSafeCategory:(id)arg0 ;
-(BOOL)installSafeCategory:(id)arg0 canInteractWithTargetClass:(BOOL)arg1 ;
-(BOOL)validateClass:(id)arg0 ;
-(BOOL)validateClass:(id)arg0 conformsToProtocol:(id)arg1 ;
-(BOOL)validateClass:(id)arg0 hasClassMethod:(id)arg1 withFullSignature:(char *)arg2 ;
-(BOOL)validateClass:(id)arg0 hasInstanceMethod:(id)arg1 withFullSignature:(char *)arg2 ;
-(BOOL)validateClass:(id)arg0 hasInstanceVariable:(id)arg1 withType:(char *)arg2 ;
-(BOOL)validateClass:(id)arg0 hasProperty:(id)arg1 customGetter:(id)arg2 customSetter:(id)arg3 withType:(char *)arg4 ;
-(BOOL)validateClass:(id)arg0 hasProperty:(id)arg1 withType:(char *)arg2 ;
-(BOOL)validateClass:(id)arg0 hasSwiftField:(id)arg1 withSwiftType:(char *)arg2 ;
-(BOOL)validateClass:(id)arg0 hasSwiftFieldOfAnyClass:(id)arg1 ;
-(BOOL)validateClass:(id)arg0 isKindOfClass:(id)arg1 ;
-(BOOL)validateProtocol:(id)arg0 conformsToProtocol:(id)arg1 ;
-(BOOL)validateProtocol:(id)arg0 hasMethod:(id)arg1 isInstanceMethod:(BOOL)arg2 isRequired:(BOOL)arg3 ;
-(BOOL)validateProtocol:(id)arg0 hasOptionalClassMethod:(id)arg1 ;
-(BOOL)validateProtocol:(id)arg0 hasOptionalInstanceMethod:(id)arg1 ;
-(BOOL)validateProtocol:(id)arg0 hasRequiredClassMethod:(id)arg1 ;
-(BOOL)validateProtocol:(id)arg0 hasRequiredInstanceMethod:(id)arg1 ;
-(BOOL)validateSwiftEnum:(id)arg0 ;
-(BOOL)validateSwiftEnum:(id)arg0 hasCase:(id)arg1 ;
-(BOOL)validateSwiftEnum:(id)arg0 hasCase:(id)arg1 withSwiftType:(char *)arg2 ;
-(BOOL)validateSwiftEnum:(id)arg0 hasCaseOfAnyClass:(id)arg1 ;
-(BOOL)validateSwiftStruct:(id)arg0 ;
-(BOOL)validateSwiftStruct:(id)arg0 hasSwiftField:(id)arg1 withSwiftType:(char *)arg2 ;
-(BOOL)validateSwiftStruct:(id)arg0 hasSwiftFieldOfAnyClass:(id)arg1 ;
-(id)_nameForMethod:(struct objc_method *)arg0 ;
-(id)init;
-(void)_clearState;
-(void)_generateWarningsForMethodType:(int)arg0 onClass:(Class)arg1 superclassMethods:(struct objc_method **)arg2 numberOfSuperclassMethods:(unsigned int)arg3 ;
-(void)_generateWarningsForPrefixedMethodNames:(id)arg0 client:(id)arg1 methodType:(int)arg2 methodName:(id)arg3 className:(id)arg4 ;
-(void)_generateWarningsOnSafeCategoryClass:(Class)arg0 ;
-(void)_iterateMethodsOfType:(int)arg0 onClass:(Class)arg1 block:(id)arg2 ;
-(void)_printConsoleReport:(BOOL)arg0 isDelayed:(BOOL)arg1 ;
-(void)_resetState;
// -(void)installSafeCategories:(id)arg0 afterDelay:(unk)arg1 validationTargetName:(CGFloat)arg2 overrideProcessName:(id)arg3  ;
// -(void)performValidations:(id)arg0 withPreValidationHandler:(unk)arg1 postValidationHandler:(id)arg2  ;
// -(void)performValidations:(id)arg0 withPreValidationHandler:(unk)arg1 postValidationHandler:(id)arg2 safeCategoryInstallationHandler:(unk)arg3  ;
-(void)sendExceptionForInstallingSafeCategory:(id)arg0 onTarget:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendExceptionForSafeBlock:(id)arg0 overrideProcessName:(id)arg1 ;
-(void)sendExceptionForSafeCategoryOnWrongTarget:(id)arg0 targetBundle:(id)arg1 expectedBundle:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendExceptionForSafeIVarKey:(id)arg0 onTarget:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendExceptionForSafeValueKey:(id)arg0 onTarget:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendFailedAssertionWithErrorMessage:(id)arg0 overrideProcessName:(id)arg1 ;
-(void)sendFailedTestCase:(id)arg0 withTag:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendGenericReport:(id)arg0 withTag:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg0 conformsToProtocol:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg0 errorMessage:(id)arg1 overrideProcessName:(id)arg2 ;
-(void)sendValidateExceptionForClass:(id)arg0 hasClassMethod:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg0 hasInstanceMethod:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg0 hasInstanceVariable:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg0 hasProperty:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForClass:(id)arg0 isKindOfClass:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg0 conformsToProtocol:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg0 hasMethod:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidateExceptionForProtocol:(id)arg0 hasProperty:(id)arg1 errorMessage:(id)arg2 overrideProcessName:(id)arg3 ;
-(void)sendValidationSuccessForProcessName:(id)arg0 ;


@end


#endif