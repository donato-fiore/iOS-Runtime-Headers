// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSDIAGNOSTICLOGSINFORESPMSG_H
#define NSSDIAGNOSTICLOGSINFORESPMSG_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NSSDiagnosticLogsInfoRespMsg : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *paths; // ivar: _paths


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pathsAtIndex:(NSUInteger)arg0 ;
-(void)addPaths:(id)arg0 ;
-(void)clearPaths;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif