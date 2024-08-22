// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBSPLITCARDSECTION_H
#define _SFPBSPLITCARDSECTION_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _SFPBSplitCardSection, NSSecureCoding;


#import "_SFPBRichText.h"

@interface _SFPBSplitCardSection : PBCodable <_SFPBSplitCardSection, NSSecureCoding>



@property (retain, nonatomic) _SFPBRichText *body; // ivar: _body
@property (retain, nonatomic) _SFPBRichText *bottomTitle; // ivar: _bottomTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *listItems; // ivar: _listItems
@property (copy, nonatomic) NSString *listMoreString; // ivar: _listMoreString
@property (copy, nonatomic) NSString *listPrefix; // ivar: _listPrefix
@property (retain, nonatomic) _SFPBRichText *secondaryTopTitle; // ivar: _secondaryTopTitle
@property (readonly) Class superclass;
@property (retain, nonatomic) _SFPBRichText *topTitle; // ivar: _topTitle


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)listItemsAtIndex:(NSUInteger)arg0 ;
-(void)addListItems:(id)arg0 ;
-(void)clearListItems;
-(void)writeTo:(id)arg0 ;


@end


#endif