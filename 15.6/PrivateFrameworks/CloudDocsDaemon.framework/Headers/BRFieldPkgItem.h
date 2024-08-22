// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRFIELDPKGITEM_H
#define BRFIELDPKGITEM_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface BRFieldPkgItem : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsExecutable;
@property (nonatomic) BOOL hasIsWritable;
@property (nonatomic) BOOL hasMtime;
@property (readonly, nonatomic) BOOL hasPath;
@property (readonly, nonatomic) BOOL hasQuarantineInfo;
@property (readonly, nonatomic) BOOL hasSignature;
@property (readonly, nonatomic) BOOL hasSymlinkContent;
@property (nonatomic) BOOL hasXattrIndex;
@property (nonatomic) BOOL isExecutable; // ivar: _isExecutable
@property (nonatomic) BOOL isWritable; // ivar: _isWritable
@property (nonatomic) NSInteger mtime; // ivar: _mtime
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSString *symlinkContent; // ivar: _symlinkContent
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) NSInteger xattrIndex; // ivar: _xattrIndex


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithPkgItem:(id)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)clear;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)updateWithPkgItem:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif