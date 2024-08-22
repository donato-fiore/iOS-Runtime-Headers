// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDDEDEXTENSIONSCHEDULED_H
#define AWDDEDEXTENSIONSCHEDULED_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface AWDDEDExtensionScheduled : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger delay; // ivar: _delay
@property (retain, nonatomic) NSString *extension; // ivar: _extension
@property (nonatomic) BOOL hasDelay;
@property (readonly, nonatomic) BOOL hasExtension;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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