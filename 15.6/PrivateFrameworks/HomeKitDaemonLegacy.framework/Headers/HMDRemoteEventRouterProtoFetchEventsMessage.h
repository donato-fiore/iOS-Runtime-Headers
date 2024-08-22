// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERPROTOFETCHEVENTSMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOFETCHEVENTSMESSAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoFetchEventsMessage : PBCodable <NSCopying>

 {
    NSMutableArray *_topics;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif