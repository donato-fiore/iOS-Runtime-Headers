// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBPHOTOSPHOTOVIEWEVENT_H
#define BMPBPHOTOSPHOTOVIEWEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBPhotosPhotoViewEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSMutableArray *locations; // ivar: _locations
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)locationsAtIndex:(NSUInteger)arg0 ;
-(void)addLocations:(id)arg0 ;
-(void)clearLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif