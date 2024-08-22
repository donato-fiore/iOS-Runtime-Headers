// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIPLACEHOLDERCONSTRUCTOR_H
#define MIPLACEHOLDERCONSTRUCTOR_H

@class NSURL, NSDictionary, NSString, NSData, NSArray;
@protocol MIPlaceholderConstructorIconGenerator;

#import <Foundation/Foundation.h>


@interface MIPlaceholderConstructor : NSObject

@property (retain, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (retain, nonatomic) NSString *iconFileName; // ivar: _iconFileName
@property (retain, nonatomic) NSObject<MIPlaceholderConstructorIconGenerator> *iconGenerator; // ivar: _iconGenerator
@property (nonatomic) NSUInteger iconPreservationLevel; // ivar: _iconPreservationLevel
@property (retain, nonatomic) NSData *installSessionUUID; // ivar: _installSessionUUID
@property (retain, nonatomic) NSData *installUUID; // ivar: _installUUID
@property (nonatomic) BOOL isLaunchProhibited; // ivar: _isLaunchProhibited
@property (retain, nonatomic) NSDictionary *partialInfoPlist; // ivar: _partialInfoPlist
@property (nonatomic) BOOL performPlaceholderInstallActions; // ivar: _performPlaceholderInstallActions
@property (nonatomic) NSUInteger placeholderType; // ivar: _placeholderType
@property (copy, nonatomic) NSArray *pluginPlaceholderConstructors; // ivar: _pluginPlaceholderConstructors
@property (nonatomic) BOOL preserveFullInfoPlist; // ivar: _preserveFullInfoPlist
@property (copy, nonatomic) NSURL *substituteIconFileURL; // ivar: _substituteIconFileURL


+(id)_iconKeys;
+(id)_infoPlistKeysToLoad;
-(BOOL)_constructPluginPlaceholdersForDirectory:(id)arg0 appendingToArray:(id)arg1 bundleType:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)_copyInfoPlistLoctableToPlaceholder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_copyStringsToPlaceholder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_introspectWithError:(*id)arg0 ;
-(BOOL)_loadPartialInfoPlistWithError:(*id)arg0 ;
-(BOOL)_populatePluginPlaceholderConstructorsWithError:(*id)arg0 ;
-(BOOL)_transferAndUpdateInstallSessionIDsToPlaceholder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeIconToPlaceholder:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeInfoPlistToPlaceholder:(id)arg0 withError:(*id)arg1 ;
-(BOOL)materializeIntoBundleDirectory:(id)arg0 error:(*id)arg1 ;
-(id)_entitlementsForPath:(id)arg0 error:(*id)arg1 ;
-(id)_initWithSource:(id)arg0 byPreservingFullInfoPlist:(BOOL)arg1 forBundleType:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)initWithSource:(id)arg0 byPreservingFullInfoPlist:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif