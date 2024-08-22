// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMRSUPPORTEDCOMMANDSPROTOBUF_H
#define _NMRSUPPORTEDCOMMANDSPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _NMRSupportedCommandsProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *supportedCommands; // ivar: _supportedCommands


+(Class)supportedCommandType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)supportedCommandAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedCommand:(id)arg0 ;
-(void)clearSupportedCommands;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif