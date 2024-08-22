// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTPBAVASSET_H
#define NTPBAVASSET_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBAVAsset : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *bookmark; // ivar: _bookmark
@property (retain, nonatomic) NSMutableArray *contentKeyIdentifiers; // ivar: _contentKeyIdentifiers
@property (readonly, nonatomic) BOOL hasBookmark;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasRemoteURL;
@property (nonatomic) BOOL hasSize;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *remoteURL; // ivar: _remoteURL
@property (nonatomic) NSUInteger size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentKeyIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContentKeyIdentifiers:(id)arg0 ;
-(void)clearContentKeyIdentifiers;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif