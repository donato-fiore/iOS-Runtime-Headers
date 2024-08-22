// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERPROTOFETCHEVENTSMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOFETCHEVENTSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif