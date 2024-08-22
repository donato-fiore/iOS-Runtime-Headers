// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONUTILITIES_H
#define WBSWEBEXTENSIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface WBSWebExtensionUtilities : NSObject



+(BOOL)isTabIDValid:(CGFloat)arg0 ;
+(BOOL)isWindowIDValid:(CGFloat)arg0 ;
+(BOOL)tab:(id)arg0 matchesQueryInfo:(id)arg1 idOfCurrentWindow:(CGFloat)arg2 webExtension:(id)arg3 ;
+(BOOL)validateContentsOfDictionary:(id)arg0 requiredKeys:(id)arg1 optionalKeys:(id)arg2 keyToExpectedValueType:(id)arg3 outExceptionString:(*id)arg4 ;
+(CGFloat)nextTabID;
+(CGFloat)nextWindowID;
+(id)changeInfoForOnUpdatedEventRespectingPermissionsForTab:(id)arg0 changedProperties:(NSUInteger)arg1 webExtension:(id)arg2 ;
+(id)serializeObjectToJSON:(id)arg0 ;
+(id)tabIDToTabPositionDictionaryForTabs:(id)arg0 ;
+(id)tabStateRespectingPermissionsForTab:(id)arg0 webExtension:(id)arg1 ;
+(id)urlFromTabsCreateOrUpdatePropertiesDictionary:(id)arg0 webExtension:(id)arg1 ;
+(id)windowStateForWindow:(id)arg0 webExtension:(id)arg1 shouldPopulateTabs:(BOOL)arg2 ;


@end


#endif