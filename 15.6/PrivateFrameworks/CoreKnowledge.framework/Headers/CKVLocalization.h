// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVLOCALIZATION_H
#define CKVLOCALIZATION_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKVLocalization : NSObject <NSSecureCoding>

 {
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetIsEmbedded;
}


@property (readonly) NSString *siriLanguageCode; // ivar: _siriLanguageCode


+(BOOL)supportsSecureCoding;
+(id)_languageCodeToLocaleIdentifierMap;
+(id)assetPathForLocale:(id)arg0 ;
+(id)defaultLocalization;
+(id)supportedLanguageCodeFromLocale:(id)arg0 ;
+(id)supportedLocaleFromLanguageCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocalization:(id)arg0 ;
-(BOOL)isSiriLanguageSupported;
-(BOOL)refreshSiriLanguage;
-(id)_resolveAssetPathForSiriLanguage;
-(id)assetPathForSiriLanguage:(*BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriLanguageCode:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif