// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATE_H
#define CLKCOMPLICATIONTEMPLATE_H

@class NSDictionary, NSHashTable, NSDate, UIColor;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CLKComplicationTemplate : NSObject <NSSecureCoding, NSCopying>

 {
    NSDictionary *_metadata;
    NSHashTable *_activeClients;
    BOOL _finalizing;
}


@property (readonly, nonatomic) NSInteger compatibleFamily;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) BOOL finalized; // ivar: _finalized
@property (readonly, nonatomic) BOOL hasSubMinuteUpdateRate;
@property (readonly, nonatomic, getter=isLinkedOnOrAfterGrace) BOOL linkedOnOrAfterGrace; // ivar: _linkedOnOrAfterGrace
@property (readonly, nonatomic) BOOL needsSerializableCopy;
@property (nonatomic) BOOL renderForPreviews; // ivar: _renderForPreviews
@property (nonatomic) NSInteger sdkVersion; // ivar: _sdkVersion
@property (readonly, nonatomic) NSInteger timeTravelUpdateFrequency;
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic, setter=setUISensitivity:) NSInteger uiSensitivity; // ivar: _uiSensitivity
@property (readonly, nonatomic) BOOL usesSwiftUI;


+(BOOL)_arrayIsCompatibleWithJSONSerialization:(id)arg0 ;
+(BOOL)classIsCompatibleWithJSONSerialization:(Class)arg0 ;
+(BOOL)dictionaryIsCompatibleWithJSONSerialization:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(Class)_superClassFromCompatibleJSONSerializationClass:(Class)arg0 ;
+(id)_createJSONRepresentationFromArray:(id)arg0 bundlePath:(id)arg1 purpose:(NSUInteger)arg2 ;
+(id)_jsonObjectRepresentationFromObject:(id)arg0 bundlePath:(id)arg1 purpose:(NSUInteger)arg2 ;
+(id)_jsonRepresentationFromValue:(id)arg0 bundlePath:(id)arg1 purpose:(NSUInteger)arg2 ;
+(id)_secureCodingRepresentationOfEmbeddedObjectsArray:(id)arg0 bundlePath:(id)arg1 ;
+(id)_secureCodingRepresentationOfEmbeddedObjectsDictionary:(id)arg0 bundlePath:(id)arg1 ;
+(id)_secureCodingRepresentationOfValue:(id)arg0 bundlePath:(id)arg1 ;
+(id)classesCompatibleWithJSONSerialization;
+(id)complicationTemplateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 purpose:(NSUInteger)arg2 ;
+(id)createJSONRepresentationFromDictionary:(id)arg0 bundlePath:(id)arg1 purpose:(NSUInteger)arg2 ;
+(id)new;
+(id)objectFromJSON:(id)arg0 bundle:(id)arg1 ;
-(BOOL)_validateSwiftUIViewForKey:(id)arg0 withMaxSize:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 safeAreaInsets:(struct UIEdgeInsets )arg3 error:(*id)arg4 ;
-(BOOL)isCompatibleWithFamily:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg0 purpose:(NSUInteger)arg1 ;
-(id)_validEmbeddedTemplateClassNamesForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initPrivate;
-(id)initPrivateWithJSONObjectRepresentation:(id)arg0 bundle:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metadata;
-(id)serializableCopyWithImageProviders:(id)arg0 ;
-(id)viewDataForSwiftUIViewKey:(id)arg0 ;
-(id)viewDataKeyForSwiftUIViewKey:(id)arg0 ;
-(void)_enumerateAllBasicKeysWithBlock:(id)arg0 ;
-(void)_enumerateBOOLKeysWithBlock:(id)arg0 ;
-(void)_enumerateDateKeysWithBlock:(id)arg0 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(id)arg0 ;
-(void)_enumerateFloatKeysWithBlock:(id)arg0 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateIntegerKeysWithBlock:(id)arg0 ;
-(void)_enumerateProgressProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateScalarKeysWithBlock:(id)arg0 ;
-(void)_enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)_enumerateSwiftUIViewKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;
-(void)_finalizeSwiftUIViewForKey:(id)arg0 withMaxSize:(struct CGSize )arg1 cornerRadius:(CGFloat)arg2 safeAreaInsets:(struct UIEdgeInsets )arg3 ;
-(void)_setCustomCopyPropertiesOn:(id)arg0 finalizing:(BOOL)arg1 ;
-(void)_setProvidersPaused:(BOOL)arg0 ;
-(void)beginUpdatesForClient:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endUpdatesForClient:(id)arg0 ;
-(void)enumerateEmbeddedTemplateKeysWithBlock:(id)arg0 ;
-(void)enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)enumerateProgressProviderKeysWithBlock:(id)arg0 ;
-(void)enumerateSwiftUIViewDataKeysWithBlock:(id)arg0 ;
-(void)enumerateTextProviderKeysWithBlock:(id)arg0 ;
-(void)finalize;
-(void)maxSDKSize:(struct CGSize *)arg0 deviceSize:(struct CGSize *)arg1 forImageProviderKey:(id)arg2 ;
-(void)setMetadata:(id)arg0 ;
-(void)setSDKVersionFromLS:(id)arg0 ;


@end


#endif