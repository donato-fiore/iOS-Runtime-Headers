// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBCOLLECTIONSTYLE_H
#define _SFPBCOLLECTIONSTYLE_H

@class PBCodable, NSString, NSData;
@protocol _SFPBCollectionStyle, NSSecureCoding;


#import "_SFPBCollectionStyleGrid.h"
#import "_SFPBCollectionStyleRow.h"
#import "_SFPBCollectionStyleHorizontallyScrolling.h"

@interface _SFPBCollectionStyle : PBCodable <_SFPBCollectionStyle, NSSecureCoding>



@property (retain, nonatomic) _SFPBCollectionStyleGrid *collectionStyleGrid; // ivar: _collectionStyleGrid
@property (retain, nonatomic) _SFPBCollectionStyleRow *collectionStyleRow; // ivar: _collectionStyleRow
@property (retain, nonatomic) _SFPBCollectionStyleHorizontallyScrolling *collectionStyleScrolling; // ivar: _collectionStyleScrolling
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int initiallyVisibleCardSectionCount; // ivar: _initiallyVisibleCardSectionCount
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger whichValue; // ivar: _whichValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif