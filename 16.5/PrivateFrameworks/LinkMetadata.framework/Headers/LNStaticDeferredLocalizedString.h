// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNSTATICDEFERREDLOCALIZEDSTRING_H
#define LNSTATICDEFERREDLOCALIZEDSTRING_H

@class NSString, NSURL, _NSLocalizedStringResource;
@protocol NSCopying, NSSecureCoding, LNStaticDeferredLocalizedString;

#import <Foundation/Foundation.h>


@interface LNStaticDeferredLocalizedString : NSObject <NSCopying, NSSecureCoding, LNStaticDeferredLocalizedString>

 {
    os_unfair_lock_s _getterLock;
    os_unfair_lock_s _localizedStringResourceLock;
}


@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *defaultValue; // ivar: _defaultValue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSString *localizedKey;
@property (readonly, nonatomic) _NSLocalizedStringResource *localizedStringResource; // ivar: _localizedStringResource
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *table; // ivar: _table


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(NSUInteger)length;
-(id)_dictionaryRepresenation;
-(id)_init;
-(id)_initWithDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithKey:(id)arg0 defaultValue:(id)arg1 table:(id)arg2 bundleURL:(id)arg3 ;
-(id)initWithKey:(id)arg0 table:(id)arg1 bundleURL:(id)arg2 ;
-(id)initWithLocalizedKey:(id)arg0 bundleIdentifier:(id)arg1 bundleURL:(id)arg2 table:(id)arg3 ;
-(id)initWithLocalizedStringResource:(id)arg0 ;
-(id)localizedStringForLocaleIdentifier:(id)arg0 ;
-(id)localizedStringWithPluralizationNumber:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(id)localizedStringWithReplacements:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif