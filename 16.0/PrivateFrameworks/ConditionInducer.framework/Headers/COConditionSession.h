// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCONDITIONSESSION_H
#define COCONDITIONSESSION_H

@class NSArray, NSURL, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COConditionBundle.h"
#import "COCondition.h"
#import "COStatusBar.h"

@interface COConditionSession : NSObject

@property (readonly, nonatomic) NSArray *additionalArguments; // ivar: _additionalArguments
@property (retain, nonatomic) COConditionBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (retain, nonatomic) NSMutableDictionary *classDict; // ivar: _classDict
@property (retain, nonatomic) COCondition *condition; // ivar: _condition
@property (copy, nonatomic) id *notifyTeardownBeganCallback; // ivar: _notifyTeardownBeganCallback
@property (readonly, copy, nonatomic) NSString *selectedCondition; // ivar: _selectedCondition
@property (readonly, copy, nonatomic) NSString *selectedProfile; // ivar: _selectedProfile
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setUpQueue; // ivar: _setUpQueue
@property (retain, nonatomic) COStatusBar *statusBar; // ivar: _statusBar
@property (copy, nonatomic) id *statusBarPopupFinishedTeardownCallback; // ivar: _statusBarPopupFinishedTeardownCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tearDownQueue; // ivar: _tearDownQueue
@property (retain, nonatomic) NSString *warning; // ivar: _warning


+(BOOL)conditionIsBundledWithFramework:(id)arg0 ;
+(BOOL)tearDownAllConditionsWithErrors:(*id)arg0 ;
+(BOOL)updateConditionCache:(BOOL)arg0 forCondition:(id)arg1 additionalArguments:(id)arg2 conditionBundle:(id)arg3 error:(*id)arg4 ;
+(BOOL)writeConditionCache:(id)arg0 toFileDescriptor:(int)arg1 error:(*id)arg2 ;
+(id)_loadExternalConditionBundleInfo:(id)arg0 supportedConditionData:(id)arg1 error:(*id)arg2 ;
+(id)bundleToDict:(id)arg0 ;
+(id)findBundleURLForConditionClass:(id)arg0 andError:(*id)arg1 ;
+(id)getActiveConditions;
+(id)getBootSessionUUID;
+(id)getBundleURLsAtPath:(id)arg0 ;
+(id)listAvailableConditions;
+(id)loadConditionCacheWithError:(*id)arg0 ;
+(id)loadInformationDict;
+(id)prepareInfoDictForBuiltInCondition:(id)arg0 error:(*id)arg1 ;
+(id)removeStaleConditions:(id)arg0 ;
+(void)logSignpostWithConditionStates;
-(BOOL)_setupBundleAtPath:(id)arg0 withError:(*id)arg1 ;
-(BOOL)createStatusBar:(id)arg0 conditionClassDescription:(id)arg1 withProfileDescription:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasActiveCondition;
-(BOOL)loadBundleWithPath:(id)arg0 andError:(*id)arg1 ;
-(BOOL)loadProfileForBundle:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setUpWithError:(*id)arg0 ;
-(BOOL)startConditionWithCallback:(id)arg0 ;
// -(BOOL)startConditionWithCallback:(id)arg0 andStatusBarNotificationCallback:(unk)arg1  ;
// -(BOOL)startConditionWithCallback:(id)arg0 teardownStartedCallback:(unk)arg1 teardownFinishedCallback:(id)arg2  ;
-(BOOL)stopConditionWithCallback:(id)arg0 ;
-(BOOL)tearDownWithError:(*id)arg0 ;
-(id)className;
-(id)copyLoadedConditionClassName;
-(id)initWithConditionIdentifier:(id)arg0 profile:(id)arg1 ;
-(id)initWithConditionIdentifier:(id)arg0 profile:(id)arg1 additionalArgs:(id)arg2 ;
-(id)userFriendlyNameForSelectedCondition;
-(id)userFriendlyNameForSelectedProfile;
-(void)dealloc;
-(void)freeStatusBar;


@end


#endif