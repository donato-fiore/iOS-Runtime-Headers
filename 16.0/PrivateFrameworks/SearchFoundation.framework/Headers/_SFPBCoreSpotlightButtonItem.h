// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCORESPOTLIGHTBUTTONITEM_H
#define _SFPBCORESPOTLIGHTBUTTONITEM_H

@class PBCodable, NSArray, NSString, NSData;
@protocol _SFPBCoreSpotlightButtonItem, NSSecureCoding;



@interface _SFPBCoreSpotlightButtonItem : PBCodable <_SFPBCoreSpotlightButtonItem, NSSecureCoding>



@property (copy, nonatomic) NSArray *actionItemTypes; // ivar: _actionItemTypes
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)actionItemTypesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addActionItemTypes:(id)arg0 ;
-(void)clearActionItemTypes;
-(void)writeTo:(id)arg0 ;


@end


#endif