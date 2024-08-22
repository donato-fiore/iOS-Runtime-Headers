// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBAPPEARANCE_H
#define BLTPBAPPEARANCE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "BLTPBImage.h"

@interface BLTPBAppearance : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL destructive; // ivar: _destructive
@property (nonatomic) BOOL hasDestructive;
@property (readonly, nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) BLTPBImage *image; // ivar: _image
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif