// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSRECTIFIPATTERNITEM_H
#define PLUSSCHEMAPLUSRECTIFIPATTERNITEM_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PLUSSchemaPLUSRECTIFIPatternItem : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *cdmMatchingSpanLabel; // ivar: _cdmMatchingSpanLabel
@property (nonatomic) BOOL hasCdmMatchingSpanLabel; // ivar: _hasCdmMatchingSpanLabel
@property (nonatomic) BOOL hasItemSource;
@property (nonatomic) BOOL hasItemType;
@property (nonatomic) BOOL hasRelativeTimestampInMs;
@property (nonatomic) BOOL hasUufrSaidDialogIdentifier; // ivar: _hasUufrSaidDialogIdentifier
@property (nonatomic) int itemSource; // ivar: _itemSource
@property (nonatomic) int itemType; // ivar: _itemType
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger relativeTimestampInMs; // ivar: _relativeTimestampInMs
@property (copy, nonatomic) NSString *uufrSaidDialogIdentifier; // ivar: _uufrSaidDialogIdentifier
@property (readonly, nonatomic) NSUInteger whichPatternitemcontent; // ivar: _whichPatternitemcontent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCdmMatchingSpanLabel;
-(void)deleteItemSource;
-(void)deleteItemType;
-(void)deleteRelativeTimestampInMs;
-(void)deleteUufrSaidDialogIdentifier;
-(void)writeTo:(id)arg0 ;


@end


#endif