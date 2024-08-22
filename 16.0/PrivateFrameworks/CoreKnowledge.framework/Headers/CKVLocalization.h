// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVLOCALIZATION_H
#define CKVLOCALIZATION_H

@class NSString, NSSet, NSURL;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVLocalization : NSObject <NSSecureCoding>

 {
    NSString *_siriLanguageCode;
    NSSet *_dictationLanguageCodes;
    NSURL *_cachedAssetPath;
    int _assetRequestCount;
    BOOL _assetResolved;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)supportsSecureCoding;
+(NSInteger)supportedLocaleFromLanguageCode:(id)arg0 ;
+(id)defaultLocalization;
+(id)languageDesignatorFromLanguageCode:(id)arg0 ;
+(id)supportedLanguageCodeFromLocale:(id)arg0 ;
+(id)supportedNSLocaleFromLanguageCode:(id)arg0 ;
-(BOOL)_locateMorphunAssetForLocale:(id)arg0 outAssetPath:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLocalization:(id)arg0 ;
-(NSInteger)locateMorphunAssetForSiriLanguage:(*id)arg0 ;
-(id)allLanguageCodes;
-(id)dictationLanguageCodes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSiriLanguageCode:(id)arg0 ;
-(id)siriLanguageCode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refresh;


@end


#endif