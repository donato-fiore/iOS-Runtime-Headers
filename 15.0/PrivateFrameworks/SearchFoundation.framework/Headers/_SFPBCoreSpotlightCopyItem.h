// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCORESPOTLIGHTCOPYITEM_H
#define _SFPBCORESPOTLIGHTCOPYITEM_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBCoreSpotlightCopyItem, NSSecureCoding;



@interface _SFPBCoreSpotlightCopyItem : PBCodable <_SFPBCoreSpotlightCopyItem, NSSecureCoding>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (copy, nonatomic) NSArray *dataProviderTypeIdentifiers; // ivar: _dataProviderTypeIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *fileProviderTypeIdentifiers; // ivar: _fileProviderTypeIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dataProviderTypeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)fileProviderTypeIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addDataProviderTypeIdentifiers:(id)arg0 ;
-(void)addFileProviderTypeIdentifiers:(id)arg0 ;
-(void)clearDataProviderTypeIdentifiers;
-(void)clearFileProviderTypeIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif