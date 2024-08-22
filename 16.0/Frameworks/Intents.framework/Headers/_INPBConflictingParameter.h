// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBCONFLICTINGPARAMETER_H
#define _INPBCONFLICTINGPARAMETER_H

@class PBCodable, NSArray, NSString;
@protocol _INPBConflictingParameter, NSSecureCoding, NSCopying;



@interface _INPBConflictingParameter : PBCodable <_INPBConflictingParameter, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *alternateItems; // ivar: _alternateItems
@property (readonly, nonatomic) NSUInteger alternateItemsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKeyPath;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alternateItemsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAlternateItems:(id)arg0 ;
-(void)clearAlternateItems;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif