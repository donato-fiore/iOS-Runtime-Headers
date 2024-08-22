// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABVCARDRECORD_H
#define ABVCARDRECORD_H


#import <Foundation/Foundation.h>


@interface ABVCardRecord : NSObject {
    *void _record;
    *__CFArray _properties;
}




+(BOOL)includeABClipRectInVCardPhotos;
+(BOOL)includeImageURIInVCards;
+(BOOL)includeNotesInVCards;
+(BOOL)includePhotosInVCards;
+(BOOL)includeREVInVCards;
+(BOOL)privateVCardEnabled;
+(BOOL)vcardFieldisPrivate:(id)arg0 ;
+(struct __CFArray *)supportedProperties;
+(void)clearPrivateFields;
+(void)setIncludeNotesInVCards:(BOOL)arg0 ;
+(void)setIncludePhotosInVCards:(BOOL)arg0 ;
+(void)setIncludeREVInVCards:(BOOL)arg0 ;
+(void)setPrivateVCardEnabled:(BOOL)arg0 ;
+(void)setVCardField:(id)arg0 isPrivate:(BOOL)arg1 ;
-(*void)copyValueForProperty:(unsigned int)arg0 ;
-(*void)record;
-(*void)valueForProperty:(unsigned int)arg0 ;
-(BOOL)_isCompany;
-(BOOL)_showField:(unsigned int)arg0 ;
-(BOOL)_showField:(unsigned int)arg0 identifier:(int)arg1 ;
-(BOOL)_usesArrayForExternalPropKey:(id)arg0 ;
-(BOOL)setValue:(*void)arg0 forProperty:(unsigned int)arg1 ;
-(BOOL)useThumbnailImageFormatIfAvailable;
-(id)ISO8061StringFromDate:(id)arg0 ;
-(id)ISO8061StringFromDateTime:(id)arg0 ;
-(id)_21vCardRepresentationAsData;
-(id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg0 ;
-(id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg0 withPhoto:(id)arg1 extraPhotoParameters:(id)arg2 includePrivateData:(BOOL)arg3 ;
-(id)_dictionaryForActivityAlerts;
-(id)_fullName;
-(id)_fullNameIncludingAuxiliaryElements:(BOOL)arg0 ;
-(id)_prodID;
-(id)_realCompositeName;
-(id)_typeParameterForToneType:(id)arg0 ;
-(id)_vCardKeyForAddressLabel:(id)arg0 vCard3:(BOOL)arg1 ;
-(id)_vCardKeysForPhoneLabel:(id)arg0 ;
-(id)_valueForPersonSounds:(*void)arg0 identifier:(int)arg1 ;
-(id)alternateName;
-(id)dataForInstantMessageProperties;
-(id)dataForSocialProfileProperty:(*void)arg0 groupCount:(*NSInteger)arg1 includePrivateData:(BOOL)arg2 ;
-(id)dataForSoundProperty:(*void)arg0 ;
-(id)encodedDataForValue:(id)arg0 charsetName:(*id)arg1 ;
-(id)encodedLineForValue:(id)arg0 ;
-(id)imageData;
-(id)init;
-(id)initWithRecord:(*void)arg0 ;
-(id)initWithVCardRepresentation:(id)arg0 ;
-(id)newISO8061StringFromDate:(id)arg0 ;
-(id)propertyLineForGenericABProperty21:(unsigned int)arg0 vCardProperty:(id)arg1 ;
-(id)propertyLineForGenericABProperty:(unsigned int)arg0 vCardProperty:(id)arg1 is21:(BOOL)arg2 groupCount:(*NSInteger)arg3 ;
-(id)propertyLineForIMHandles:(id)arg0 labels:(id)arg1 vCardProperty:(id)arg2 ;
-(id)propertyLineForIMPPProperty:(BOOL)arg0 groupCount:(*NSInteger)arg1 includePrivateData:(BOOL)arg2 ;
-(id)propertyLineForInstantMessageHandles:(BOOL)arg0 groupCount:(*NSInteger)arg1 includePrivateData:(BOOL)arg2 ;
-(id)stringForAlternateBirthdayComponent:(id)arg0 key:(id)arg1 formatWidth:(int)arg2 ;
-(id)stringFromAlternateBirthday:(id)arg0 ;
-(id)vCardRepresentationForMode:(int)arg0 ;
-(struct __CFString *)_vCardKeyForEmailLabel:(id)arg0 ;
-(struct __CFString *)_vCardKeyForGenericLabel:(id)arg0 ;
-(void)_addPersonSounds:(*void)arg0 identifier:(int)arg1 toActivityAlerts:(*id)arg2 activity:(id)arg3 alert:(id)arg4 ;
-(void)_appendPropValue:(id)arg0 forPropKey:(id)arg1 toOutString:(id)arg2 usingDelimiter:(id)arg3 inGroup:(id)arg4 ;
-(void)appendLabel:(id)arg0 toVCardRep:(id)arg1 inGroup:(id)arg2 ;
-(void)dealloc;


@end


#endif