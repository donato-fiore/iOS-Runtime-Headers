// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEOBJECTTYPESOURCEORDER_H
#define HDCODABLEOBJECTTYPESOURCEORDER_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HDCodableObjectTypeSourceOrder : PBCodable <NSCopying>

 {
    ? _modificationDates;
    ? _has;
}


@property (nonatomic) BOOL hasObjectType;
@property (readonly, nonatomic) BOOL hasSourceUUIDs;
@property (nonatomic) BOOL hasUserOrdered;
@property (readonly, nonatomic) *CGFloat modificationDates;
@property (readonly, nonatomic) NSUInteger modificationDatesCount;
@property (nonatomic) NSInteger objectType; // ivar: _objectType
@property (retain, nonatomic) NSData *sourceUUIDs; // ivar: _sourceUUIDs
@property (nonatomic) BOOL userOrdered; // ivar: _userOrdered


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)modificationDatesAtIndex:(NSUInteger)arg0 ;
-(NSInteger)decodedDataTypeCode;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addModificationDates:(CGFloat)arg0 ;
-(void)clearModificationDates;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif