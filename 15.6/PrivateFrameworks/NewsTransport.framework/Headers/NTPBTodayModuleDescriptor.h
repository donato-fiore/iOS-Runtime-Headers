// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBTODAYMODULEDESCRIPTOR_H
#define NTPBTODAYMODULEDESCRIPTOR_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NTPBTodayModuleDescriptor : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *availableContents; // ivar: _availableContents
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableContentsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAvailableContents:(id)arg0 ;
-(void)clearAvailableContents;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif