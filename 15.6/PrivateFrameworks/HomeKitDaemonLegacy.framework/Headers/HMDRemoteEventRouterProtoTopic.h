// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERPROTOTOPIC_H
#define HMDREMOTEEVENTROUTERPROTOTOPIC_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoTopic : PBCodable <NSCopying>

 {
    NSString *_eventUUID;
    NSString *_topic;
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