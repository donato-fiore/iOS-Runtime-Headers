// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDOCUMENT_H
#define SXDOCUMENT_H

@class NSString;
@protocol SXAdvertisingSettings, SXAutoPlacement, SXHints, SXDocumentLayout;


#import "SXJSONObject.h"
#import "SXJSONArray.h"
#import "SXDocumentColorScheme.h"
#import "SXJSONDictionary.h"
#import "SXDocumentStyle.h"
#import "SXMetadata.h"

@interface SXDocument : SXJSONObject

@property (readonly, nonatomic) NSObject<SXAdvertisingSettings> *advertisingSettings;
@property (readonly, nonatomic) SXJSONArray *allComponents;
@property (readonly, nonatomic) NSObject<SXAutoPlacement> *autoplacement;
@property (readonly, nonatomic) SXDocumentColorScheme *colorScheme;
@property (readonly, nonatomic) SXJSONDictionary *componentLayouts;
@property (readonly, nonatomic) SXJSONDictionary *componentStyles;
@property (readonly, nonatomic) SXJSONDictionary *componentTextStyles;
@property (readonly, nonatomic) SXJSONArray *components;
@property (readonly, nonatomic) SXDocumentStyle *documentStyle;
@property (readonly, nonatomic) NSObject<SXHints> *hints;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSObject<SXDocumentLayout> *layout;
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly, nonatomic) SXJSONDictionary *resources;
@property (readonly, nonatomic) NSString *specVersion;
@property (readonly, nonatomic) SXJSONDictionary *textStyles;
@property (readonly, nonatomic) NSString *title;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)objectValueClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)purgeClassBlockForPropertyWithName:(SEL)arg0 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(id)initWithIdentifier:(id)arg0 JSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithJSONObject:(id)arg0 andVersion:(id)arg1 ;


@end


#endif