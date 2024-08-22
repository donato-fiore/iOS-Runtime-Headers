// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAIRMESSAGE_H
#define AVAIRMESSAGE_H

@class NSString, NSArray, NSDictionary, NSData, NSValue;

#import <Foundation/Foundation.h>


@interface AVAirMessage : NSObject

@property (copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (retain, nonatomic) NSArray *array; // ivar: _array
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *extendedLanguageTag; // ivar: _extendedLanguageTag
@property (readonly, nonatomic) NSDictionary *initialRepresentation; // ivar: _initialRepresentation
@property (copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSData *jsonDataRepresentation;
@property (retain, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly, nonatomic) unsigned int type; // ivar: _type
@property (retain, nonatomic) NSValue *value; // ivar: _value


+(BOOL)isAirMessagingEnabled;
+(id)_decompressBodyData:(id)arg0 forCompressionAlgorithm:(id)arg1 ;
+(id)_nameForDataCompressionAlgorithm:(NSInteger)arg0 ;
+(id)buildVersion;
+(id)commonDictionaryRepresentationKeys;
+(id)currentAppIdentifier;
+(id)currentOSIdentifier;
+(id)messageWithExternalMetadata:(id)arg0 itemIdentifier:(id)arg1 ;
+(id)messageWithParts:(id)arg0 ;
+(id)messageWithPosterArtworkMetadata:(id)arg0 itemIdentifier:(id)arg1 ;
+(id)messageWithRequiresLinearPlayback:(BOOL)arg0 itemIdentifier:(id)arg1 ;
+(id)messageWithUserScrubToAssetTime:(CGFloat)arg0 itemIdentifier:(id)arg1 ;
-(BOOL)shouldUseJSONForBody;
-(id)allRecognizedKeysForDictionaryRepresentation;
-(id)description;
-(id)headerTextRepresenationForBodyDataLength:(NSUInteger)arg0 extraHeaders:(id)arg1 ;
-(id)initWithMessageType:(unsigned int)arg0 itemIdentifier:(id)arg1 ;
-(id)initWithMessageType:(unsigned int)arg0 itemIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)messageDataRepresentation;
-(id)number;


@end


#endif