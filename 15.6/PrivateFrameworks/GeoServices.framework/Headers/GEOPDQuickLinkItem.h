// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDQUICKLINKITEM_H
#define GEOPDQUICKLINKITEM_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOPDQuickLinkItem : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appAdamId;
    NSString *_bundleId;
    NSString *_symbolImageName;
    NSString *_title;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _linkType;
    int _relationship;
    ? _flags;
}




+(id)quickLinksForPlaceData:(id)arg0 ;
+(id)secondaryQuickLinksForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif