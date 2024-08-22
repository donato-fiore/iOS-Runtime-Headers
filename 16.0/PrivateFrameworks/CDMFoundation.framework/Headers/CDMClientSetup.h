// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCLIENTSETUP_H
#define CDMCLIENTSETUP_H

@class NSString, NSLocale, NSArray;

#import <Foundation/Foundation.h>


@interface CDMClientSetup : NSObject

@property (readonly) NSString *activeServiceGraph; // ivar: _activeServiceGraph
@property (readonly) NSString *assetDirPath; // ivar: _assetDirPath
@property (readonly) NSLocale *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) NSArray *overrideSiriVocabSpans; // ivar: _overrideSiriVocabSpans
@property (readonly) NSString *sandboxId; // ivar: _sandboxId


-(id)description;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 activeServiceGraph:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 activeServiceGraph:(id)arg2 assetDirPath:(id)arg3 overrideSiriVocabSpans:(id)arg4 ;


@end


#endif