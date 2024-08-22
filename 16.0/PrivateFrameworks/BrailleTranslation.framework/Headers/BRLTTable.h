// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTTABLE_H
#define BRLTTABLE_H

@class NSBundle, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BRLTTable : NSObject <NSCopying>



@property (retain, nonatomic) NSBundle *_bundle; // ivar: _bundle
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *language; // ivar: _language
@property (readonly, nonatomic) NSString *localizedLanguage;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *localizedNameWithService;
@property (readonly, nonatomic) NSString *localizedService;
@property (readonly, nonatomic) NSString *localizedVariant;
@property (readonly, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly, nonatomic) BOOL supportsTranslationMode8Dot;
@property (readonly, nonatomic) BOOL supportsTranslationModeContracted;
@property (readonly, nonatomic) NSString *tableIdentifier;
@property (readonly, nonatomic) NSString *variant; // ivar: _variant


-(BOOL)_isEqualToTable:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_brailleTableDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithServiceIdentifier:(id)arg0 language:(id)arg1 variant:(id)arg2 ;
-(id)initWithServiceIdentifier:(id)arg0 tableIdentifier:(id)arg1 ;


@end


#endif