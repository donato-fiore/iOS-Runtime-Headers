// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFPBLINKPRESENTATIONCARDSECTION_H
#define _SFPBLINKPRESENTATIONCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBLinkPresentationCardSection, NSSecureCoding;



@interface _SFPBLinkPresentationCardSection : PBCodable <_SFPBLinkPresentationCardSection, NSSecureCoding>



@property (copy, nonatomic) NSString *coreSpotlightIdentifier; // ivar: _coreSpotlightIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isHighlighted; // ivar: _isHighlighted
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *peopleToBadges; // ivar: _peopleToBadges
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)peopleToBadgeCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)peopleToBadgeAtIndex:(NSUInteger)arg0 ;
-(void)addPeopleToBadge:(id)arg0 ;
-(void)clearPeopleToBadge;
-(void)setPeopleToBadge:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif