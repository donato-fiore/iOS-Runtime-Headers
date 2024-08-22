// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDNWDURATIONACCUMULATION_H
#define NWAWDNWDURATIONACCUMULATION_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NWAWDNWDurationAccumulation : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *states; // ivar: _states


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statesAtIndex:(NSUInteger)arg0 ;
-(void)addStates:(id)arg0 ;
-(void)clearStates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif