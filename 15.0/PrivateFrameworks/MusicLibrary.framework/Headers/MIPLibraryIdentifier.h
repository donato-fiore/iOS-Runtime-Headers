// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIPLIBRARYIDENTIFIER_H
#define MIPLIBRARYIDENTIFIER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface MIPLibraryIdentifier : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasLibraryId;
@property (readonly, nonatomic) BOOL hasLibraryName;
@property (nonatomic) NSInteger libraryId; // ivar: _libraryId
@property (retain, nonatomic) NSString *libraryName; // ivar: _libraryName


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