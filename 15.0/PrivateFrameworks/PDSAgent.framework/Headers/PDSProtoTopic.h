// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSPROTOTOPIC_H
#define PDSPROTOTOPIC_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface PDSProtoTopic : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *appInfos; // ivar: _appInfos
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *qualifier; // ivar: _qualifier


+(Class)appInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appInfoAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAppInfo:(id)arg0 ;
-(void)clearAppInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif