// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYAPPLICATIONEXTENSIONDISCOVERY_H
#define _UIACTIVITYAPPLICATIONEXTENSIONDISCOVERY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIActivityApplicationExtensionDiscovery : NSObject

@property (copy, nonatomic) NSArray *extensionPointIdentifiers; // ivar: _extensionPointIdentifiers
@property (copy, nonatomic) id *fetchShortcutsBlock; // ivar: _fetchShortcutsBlock


+(id)extensionBasedActivityForExtension:(id)arg0 ;
+(id)extensionMatchingDictionariesForExtensionItems:(id)arg0 ;
+(void)registerContinuousExtensionsDiscoveryOnLaunch;
-(id)_extensionsForMatchingContext:(id)arg0 error:(*id)arg1 ;
-(id)activitiesForMatchingContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithExtensionPointIdentifiers:(id)arg0 ;
-(id)reportExtensionsCacheResult;
-(void)dealloc;
-(void)primeWithDiscoveryContext:(id)arg0 ;


@end


#endif