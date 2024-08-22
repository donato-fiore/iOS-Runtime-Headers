// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSOCIALHIGHLIGHTCONTACT_H
#define PPSOCIALHIGHLIGHTCONTACT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPSocialHighlightContact : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL hasHandle;
@property (nonatomic) BOOL hasIsMe;
@property (nonatomic) BOOL hasIsSignificant;
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (nonatomic) BOOL isSignificant; // ivar: _isSignificant


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