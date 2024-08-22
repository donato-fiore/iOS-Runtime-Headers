// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSVALIDATIONERRORLOCALIZATIONPOLICY_H
#define NSVALIDATIONERRORLOCALIZATIONPOLICY_H

@class NSURL, NSBundle, NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSValidationErrorLocalizationPolicy : NSObject <NSCopying>

 {
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    BOOL _hasSetLocalizationDictionary;
}




-(id)_cachedObjectForKey:(id)arg0 value:(*void)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)localizationDictionary;
-(id)localizedEntityNameForEntity:(id)arg0 ;
-(id)localizedModelStringForKey:(id)arg0 ;
-(id)localizedPropertyNameForProperty:(id)arg0 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(void)dealloc;
-(void)setLocalizationDictionary:(id)arg0 ;


@end


#endif