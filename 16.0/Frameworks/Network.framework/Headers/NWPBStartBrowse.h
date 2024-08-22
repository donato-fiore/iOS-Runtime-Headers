// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWPBSTARTBROWSE_H
#define NWPBSTARTBROWSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NWPBBrowseDescriptor.h"
#import "NWPBParameters.h"

@interface NWPBStartBrowse : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *clientUUID; // ivar: _clientUUID
@property (retain, nonatomic) NWPBBrowseDescriptor *descriptor; // ivar: _descriptor
@property (readonly, nonatomic) BOOL hasClientUUID;
@property (readonly, nonatomic) BOOL hasDescriptor;
@property (readonly, nonatomic) BOOL hasParameters;
@property (retain, nonatomic) NWPBParameters *parameters; // ivar: _parameters


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