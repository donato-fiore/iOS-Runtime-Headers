// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLIPSSHIM_H
#define CLIPSSHIM_H

@class AnalyticsWorkspace, NSMutableSet, NSMutableString, NSString, NSMutableDictionary;
@protocol OS_dispatch_queue, CLIPSShimDelegate;

#import <Foundation/Foundation.h>

#import "ImpoExpoService.h"

@interface CLIPSShim : NSObject {
    AnalyticsWorkspace *_clipsWorkspace;
    ImpoExpoService *_ieService;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSMutableSet *clipsHeldObjects; // ivar: _clipsHeldObjects
@property (nonatomic) NSUInteger commandStringLoc; // ivar: _commandStringLoc
@property (retain, nonatomic) NSMutableString *consoleContents; // ivar: _consoleContents
@property (nonatomic) ? consoleNameRegex; // ivar: _consoleNameRegex
@property (retain, nonatomic) NSString *currentCommand; // ivar: _currentCommand
@property (weak, nonatomic) NSObject<CLIPSShimDelegate> *delegate; // ivar: _delegate
@property (nonatomic) ? dumpStringRegex; // ivar: _dumpStringRegex
@property (retain, nonatomic) NSMutableString *dumpedString; // ivar: _dumpedString
@property (nonatomic) *void environment; // ivar: _environment
@property (retain, nonatomic) NSMutableDictionary *invocationMap; // ivar: _invocationMap
@property (readonly, nonatomic) NSMutableDictionary *modules; // ivar: _modules
@property (retain, nonatomic) NSMutableDictionary *pendingOTAUpdates; // ivar: _pendingOTAUpdates
@property (nonatomic) unsigned int strongAddressType; // ivar: _strongAddressType


+(id)createDecryptedCLPData:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)dataSectionNameForModule:(id)arg0 ;
+(id)decodeAndInflateCLIPSString:(id)arg0 ;
+(id)decryptCLIPSData:(id)arg0 forModule:(id)arg1 ;
+(id)sharedInstance;
+(struct _CCCryptor *)cryptor;
-(*void)addObjectToEnvironment:(id)arg0 ;
-(*void)assertFactString:(id)arg0 moduleName:(id)arg1 ;
-(*void)deftemplateNamed:(id)arg0 moduleName:(id)arg1 ;
-(*void)getNextFact:(*void)arg0 ;
-(BOOL)addModuleNamed:(id)arg0 withConstruct:(id)arg1 ;
-(BOOL)addNewConstruct:(id)arg0 ;
-(BOOL)conservePrettyPrintMemory:(BOOL)arg0 ;
-(BOOL)factIsImportant:(id)arg0 ;
-(BOOL)initializeWorkspace;
-(BOOL)loadConstructsForModule:(id)arg0 ;
-(NSInteger)constructLoadStateForModule:(id)arg0 ;
-(NSInteger)memoryUsed;
-(NSInteger)releaseAllFreeMemory;
-(NSInteger)run;
-(NSInteger)run:(NSInteger)arg0 ;
-(NSUInteger)factCount;
-(id)consoleBuffer;
-(id)currentModule;
-(id)currentRuleName;
-(id)deftemplatesMatchingPrefix:(id)arg0 ;
-(id)dumpEngineStatusWithContext:(id)arg0 ;
-(id)factDictionaryForFact:(*void)arg0 ;
-(id)factStringForFactDictionary:(id)arg0 ;
-(id)getValueForSlotNamed:(id)arg0 fromFact:(*void)arg1 ;
-(id)init;
-(id)loadDataSection:(id)arg0 ;
-(id)matchFactsWithDeftemplateName:(id)arg0 withSlotKeyValues:(id)arg1 ;
-(id)moduleNames;
-(id)moduleRulesByName:(id)arg0 ;
-(id)objectForDO:(struct dataObject *)arg0 ;
-(id)objectFromMultifieldArg:(*void)arg0 start:(NSInteger)arg1 end:(NSInteger)arg2 ;
-(id)otaUpdatePlatformStringForDeviceClass:(NSInteger)arg0 ;
-(id)parseCLIPSModuleInfoFromConstructs:(id)arg0 ;
-(id)printedFacts:(id)arg0 limit:(NSInteger)arg1 ;
-(id)setCurrentModule:(id)arg0 ;
-(id)slotsStringForTemplate:(id)arg0 fromDictionary:(id)arg1 moduleName:(id)arg2 ;
-(id)stringFromConstructsLoadState:(NSInteger)arg0 ;
-(id)swapConsoleBuffer:(id)arg0 ;
-(int)executeBatchCommand:(id)arg0 module:(id)arg1 ;
-(void)_logFactsForModule:(id)arg0 limit:(NSInteger)arg1 when:(NSInteger)arg2 ;
-(void)addCallbackInvocation:(id)arg0 invocation:(id)arg1 ;
-(void)clear;
-(void)deactivateModule:(id)arg0 ;
-(void)dealloc;
-(void)executeCommand:(id)arg0 moduleName:(id)arg1 ;
-(void)listAllDeftemplates;
-(void)log:(id)arg0 ;
-(void)logFacts:(NSInteger)arg0 ;
-(void)logMemoryStatistics:(id)arg0 ;
-(void)logMemoryStatistics:(id)arg0 verboseOnly:(BOOL)arg1 ;
-(void)performOnFactsWithDeftemplateName:(id)arg0 usingBlock:(id)arg1 ;
-(void)pushFocus:(id)arg0 ;
-(void)registerCallbackFunction:(id)arg0 selector:(SEL)arg1 target:(id)arg2 ;
-(void)releaseFact:(*void)arg0 ;
-(void)removeCallbackInvocation:(id)arg0 ;
-(void)reportError:(id)arg0 ;
-(void)reset;
-(void)retainFact:(*void)arg0 ;
-(void)retractFact:(*void)arg0 ;
-(void)setCommandString:(id)arg0 ;
-(void)setOTAUpdate:(id)arg0 version:(id)arg1 module:(id)arg2 ;
-(void)setQueue:(id)arg0 ;
-(void)unloadConstructsForModule:(id)arg0 unconditionally:(BOOL)arg1 ;
-(void)updateAllModuleInfos;
-(void)updateModuleInfoForModule:(id)arg0 slotValues:(id)arg1 ;


@end


#endif