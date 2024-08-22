// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBWORKOUTASSOCIATEDITEM_H
#define _INPBWORKOUTASSOCIATEDITEM_H

@class PBCodable, NSString;
@protocol _INPBWorkoutAssociatedItem, NSSecureCoding, NSCopying;


#import "_INPBDataString.h"

@interface _INPBWorkoutAssociatedItem : PBCodable <_INPBWorkoutAssociatedItem, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int contentRating; // ivar: _contentRating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasContentRating;
@property (readonly, nonatomic) BOOL hasItemID;
@property (nonatomic) BOOL hasItemLabel;
@property (readonly, nonatomic) BOOL hasItemName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (nonatomic) int itemLabel; // ivar: _itemLabel
@property (retain, nonatomic) _INPBDataString *itemName; // ivar: _itemName
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contentRatingAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)itemLabelAsString:(int)arg0 ;
-(int)StringAsContentRating:(id)arg0 ;
-(int)StringAsItemLabel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif