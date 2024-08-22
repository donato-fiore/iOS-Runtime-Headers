// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MPCPROTORADIOCONTENTREFERENCELIBRARYITEMCONTENTREFERENCE_H
#define _MPCPROTORADIOCONTENTREFERENCELIBRARYITEMCONTENTREFERENCE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying>

 {
    NSInteger _cloudID;
    CGFloat _duration;
    CGFloat _fileSize;
    NSInteger _storeAdamID;
    NSString *_albumArtistName;
    int _albumDiscCount;
    NSString *_albumName;
    int _albumTrackCount;
    NSString *_artistName;
    NSString *_composerName;
    int _contentType;
    NSString *_copyrightText;
    int _discNumber;
    NSString *_genreName;
    NSString *_title;
    int _trackNumber;
    int _year;
    BOOL _isCompilation;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif