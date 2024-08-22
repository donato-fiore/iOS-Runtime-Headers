// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSWEBEXTENSIONLOCALIZATION_H
#define WBSWEBEXTENSIONLOCALIZATION_H

@class NSDictionary, NSString, NSLocale, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionLocalization : NSObject <NSSecureCoding>

 {
    NSDictionary *_localizationDictionary;
    NSString *_localeString;
    NSLocale *_locale;
    NSUUID *_uniqueIdentifier;
}




+(BOOL)supportsSecureCoding;
-(id)_localizedArrayForArray:(id)arg0 ;
-(id)_predefinedMessagesForLocale:(id)arg0 ;
-(id)_stringByReplacingNamedPlaceholdersInString:(id)arg0 withNamedPlaceholders:(id)arg1 ;
-(id)_stringByReplacingPositionalPlaceholdersInString:(id)arg0 withValues:(id)arg1 ;
-(id)initWithBundleURL:(id)arg0 defaultLocale:(id)arg1 uniqueIdentifier:(id)arg2 extensionIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegionalLocalization:(id)arg0 languageLocalization:(id)arg1 defaultLocalization:(id)arg2 withBestLocale:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(id)localizedDictionaryForDictionary:(id)arg0 ;
-(id)localizedStringForKey:(id)arg0 withPlaceholders:(id)arg1 ;
-(id)localizedStringForString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif