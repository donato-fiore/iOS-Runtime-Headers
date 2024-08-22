// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXEXTENSIONPOINTENUMERATOR_H
#define EXEXTENSIONPOINTENUMERATOR_H

@class NSEnumerator, NSDictionary;
@protocol EXEnumeratorConfig;


#import "_EXExtensionPoint.h"

@interface EXExtensionPointEnumerator : NSEnumerator

@property (readonly) NSObject<EXEnumeratorConfig> *config; // ivar: _config
@property (readonly) _EXExtensionPoint *currentExtensionPoint; // ivar: _currentExtensionPoint
@property (readonly) NSDictionary *currentExtensionPointDict; // ivar: _currentExtensionPointDict
@property (readonly) NSDictionary *extensionPoints; // ivar: _extensionPoints
@property (readonly) NSEnumerator *extensionPointsKeyEnumerator; // ivar: _extensionPointsKeyEnumerator
@property (readonly) BOOL validateExtensionPoints; // ivar: _validateExtensionPoints


+(void)enumerateExtensionPointsInDirectoryAtURL:(id)arg0 block:(id)arg1 ;
-(BOOL)validateExtensionPointIdentifier:(id)arg0 sdkDictionary:(id)arg1 ;
-(id)initWithCacheURLs:(id)arg0 config:(id)arg1 ;
-(id)initWithSDKDictionary:(id)arg0 config:(id)arg1 ;
-(id)initWithSDKDictionary:(id)arg0 urls:(id)arg1 config:(id)arg2 ;
-(id)nextObject;
-(id)synthesizeNSExtensionKeysInDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)translateXPCCacheDictionary:(id)arg0 ;


@end


#endif