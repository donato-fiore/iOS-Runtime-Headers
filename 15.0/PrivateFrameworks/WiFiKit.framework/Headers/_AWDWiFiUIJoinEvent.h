// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AWDWIFIUIJOINEVENT_H
#define _AWDWIFIUIJOINEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface _AWDWiFiUIJoinEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int error; // ivar: _error
@property (nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasProcess;
@property (readonly, nonatomic) BOOL hasSection;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (retain, nonatomic) NSString *section; // ivar: _section
@property (retain, nonatomic) NSMutableArray *sectionCounts; // ivar: _sectionCounts
@property (nonatomic) unsigned int securityType; // ivar: _securityType
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionCountsAtIndex:(NSUInteger)arg0 ;
-(void)addSectionCounts:(id)arg0 ;
-(void)clearSectionCounts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif