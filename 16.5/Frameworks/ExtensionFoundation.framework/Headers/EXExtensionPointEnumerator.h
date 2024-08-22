// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXEXTENSIONPOINTENUMERATOR_H
#define EXEXTENSIONPOINTENUMERATOR_H

@class NSEnumerator, NSString, NSMutableDictionary, NSDictionary;
@protocol EXEnumeratorConfig;


#import "_EXExtensionPoint.h"

@interface EXExtensionPointEnumerator : NSEnumerator

@property (readonly) NSObject<EXEnumeratorConfig> *config; // ivar: _config
@property (readonly) _EXExtensionPoint *currentExtensionPoint; // ivar: _currentExtensionPoint
@property (readonly) NSString *currentIdentifier; // ivar: _currentIdentifier
@property (readonly) NSMutableDictionary *currentSDKDictionaryForPlatform; // ivar: _currentSDKDictionaryForPlatform
@property (readonly) NSDictionary *extensionPoints; // ivar: _extensionPoints
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator; // ivar: _extensionPointsKeyEnumerator
@property (readonly) BOOL validateExtensionPoints; // ivar: _validateExtensionPoints


+(id)translateAppexptDictionary:(id)arg0 definitionURL:(id)arg1 isCatalyst:(BOOL)arg2 ;
+(void)enumerateExtensionPointsInDirectoryAtURL:(id)arg0 block:(id)arg1 ;
-(BOOL)validateExtensionPointIdentifier:(id)arg0 sdkDictionary:(id)arg1 ;
-(id)flattenEXExtensionPointConfigurationInDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)initWithCacheURLs:(id)arg0 config:(id)arg1 ;
-(id)initWithSDKDictionary:(id)arg0 config:(id)arg1 ;
-(id)initWithSDKDictionary:(id)arg0 urls:(id)arg1 config:(id)arg2 ;
-(id)nextObject;
-(id)synthesizeNSExtensionKeysInDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)translateXPCCacheDictionary:(id)arg0 ;


@end


#endif