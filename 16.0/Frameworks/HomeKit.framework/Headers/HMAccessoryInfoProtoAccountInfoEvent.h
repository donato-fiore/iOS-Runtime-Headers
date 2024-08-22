// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMACCESSORYINFOPROTOACCOUNTINFOEVENT_H
#define HMACCESSORYINFOPROTOACCOUNTINFOEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMAccessoryInfoProtoAccountInfoEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *aaAltDSID; // ivar: _aaAltDSID
@property (retain, nonatomic) NSString *amsAltDSID; // ivar: _amsAltDSID
@property (readonly, nonatomic) BOOL hasAaAltDSID;
@property (readonly, nonatomic) BOOL hasAmsAltDSID;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif