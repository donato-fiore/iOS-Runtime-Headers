// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMCLIENTSETUP_H
#define CDMCLIENTSETUP_H

@class NSString, NSLocale, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMClientSetup : NSObject <NSSecureCoding>



@property (readonly) NSString *activeServiceGraph; // ivar: _activeServiceGraph
@property (readonly) NSString *assetDirPath; // ivar: _assetDirPath
@property (readonly) NSLocale *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) NSArray *overrideSiriVocabSpans; // ivar: _overrideSiriVocabSpans
@property (readonly) NSString *requesterId; // ivar: _requesterId
@property (readonly) NSString *sandboxId; // ivar: _sandboxId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 activeServiceGraph:(id)arg2 ;
-(id)initWithLocaleIdentifier:(id)arg0 sandboxId:(id)arg1 activeServiceGraph:(id)arg2 assetDirPath:(id)arg3 overrideSiriVocabSpans:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif