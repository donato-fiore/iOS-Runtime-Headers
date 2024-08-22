// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPBHOSTENDPOINT_H
#define NWPBHOSTENDPOINT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWPBHostEndpoint : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasHostname;
@property (readonly, nonatomic) BOOL hasPort;
@property (retain, nonatomic) NSString *hostname; // ivar: _hostname
@property (retain, nonatomic) NSString *port; // ivar: _port


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