// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBAUDIOPLAYLISTITEM_H
#define NTPBAUDIOPLAYLISTITEM_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NTPBDate.h"

@interface NTPBAudioPlaylistItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *articleID; // ivar: _articleID
@property (retain, nonatomic) NTPBDate *dateAdded; // ivar: _dateAdded
@property (readonly, nonatomic) BOOL hasArticleID;
@property (readonly, nonatomic) BOOL hasDateAdded;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasListOrder;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger listOrder; // ivar: _listOrder


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif