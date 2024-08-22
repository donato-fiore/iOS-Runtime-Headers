// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCODABLECONTACTLIST_H
#define ASCODABLECONTACTLIST_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ASCodableContactList : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contacts; // ivar: _contacts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContacts:(id)arg0 ;
-(void)clearContacts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif