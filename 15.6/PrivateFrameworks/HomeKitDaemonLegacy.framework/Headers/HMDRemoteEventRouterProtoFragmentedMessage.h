// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEEVENTROUTERPROTOFRAGMENTEDMESSAGE_H
#define HMDREMOTEEVENTROUTERPROTOFRAGMENTEDMESSAGE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface HMDRemoteEventRouterProtoFragmentedMessage : PBCodable <NSCopying>

 {
    NSUInteger _totalFragments;
    NSUInteger _totalSize;
    NSData *_fragmentData;
    unsigned int _fragmentNumber;
    unsigned int _routerVersion;
    ? _has;
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