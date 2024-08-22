// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HVPBDATASOURCECONTENTSTATE_H
#define HVPBDATASOURCECONTENTSTATE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HVPBDataSourceContentState : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *deferredContentStates; // ivar: _deferredContentStates


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deferredContentStatesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addDeferredContentStates:(id)arg0 ;
-(void)clearDeferredContentStates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif