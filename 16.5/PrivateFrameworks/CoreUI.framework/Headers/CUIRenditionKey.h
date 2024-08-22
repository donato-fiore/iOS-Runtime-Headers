// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIRENDITIONKEY_H
#define CUIRENDITIONKEY_H

@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface CUIRenditionKey : NSObject <NSCopying, NSCoding>

 {
    _renditionkeytoken _stackKey;
    *_renditionkeytoken _key;
    unsigned short _highwaterKeyCount;
}


@property (nonatomic) NSInteger themeAppearance;
@property (nonatomic) NSInteger themeDeploymentTarget;
@property (nonatomic) NSInteger themeDimension1;
@property (nonatomic) NSInteger themeDimension2;
@property (nonatomic) NSInteger themeDirection;
@property (nonatomic) NSInteger themeDisplayGamut;
@property (nonatomic) NSInteger themeElement;
@property (nonatomic) NSInteger themeGlyphSize;
@property (nonatomic) NSInteger themeGlyphWeight;
@property (nonatomic) NSInteger themeGraphicsClass;
@property (nonatomic) NSInteger themeIdentifier;
@property (nonatomic) NSInteger themeIdiom;
@property (nonatomic) NSInteger themeLayer;
@property (nonatomic) NSInteger themeLocalization;
@property (nonatomic) NSInteger themeMemoryClass;
@property (nonatomic) NSInteger themePart;
@property (nonatomic) NSInteger themePresentationState;
@property (nonatomic) NSInteger themePreviousState;
@property (nonatomic) NSInteger themePreviousValue;
@property (nonatomic) NSInteger themeScale;
@property (nonatomic) NSInteger themeSize;
@property (nonatomic) NSInteger themeSizeClassHorizontal;
@property (nonatomic) NSInteger themeSizeClassVertical;
@property (nonatomic) NSInteger themeState;
@property (nonatomic) NSInteger themeSubtype;
@property (nonatomic) NSInteger themeValue;


+(id)renditionKey;
+(id)renditionKeyWithKeyList:(struct _renditionkeytoken *)arg0 ;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBasedOnKeyFormat:(struct _renditionkeyfmt *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyList:(struct _renditionkeytoken *)arg0 ;
-(id)initWithThemeElement:(NSInteger)arg0 themePart:(NSInteger)arg1 themeSize:(NSInteger)arg2 themeDirection:(NSInteger)arg3 themeValue:(NSInteger)arg4 themeDimension1:(NSInteger)arg5 themeDimension2:(NSInteger)arg6 themeState:(NSInteger)arg7 themePresentationState:(NSInteger)arg8 themeLayer:(NSInteger)arg9 themeScale:(NSInteger)arg10 themeIdentifier:(NSInteger)arg11 ;
-(id)nameOfAttributeName:(int)arg0 ;
-(struct _renditionkeytoken *)keyList;
-(void)copyValuesFromKeyList:(struct _renditionkeytoken *)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeValueForKeyTokenIdentifier:(NSInteger)arg0 ;
-(void)setValuesFromKeyList:(struct _renditionkeytoken *)arg0 ;


@end


#endif