// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRAUDIOROUTEPROTOBUF_H
#define _MRAUDIOROUTEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRAudioRouteProtobuf : PBCodable <NSCopying>

 {
    NSString *_name;
    int _type;
    BOOL _spatializationEnabled;
    BOOL _supportsSpatialization;
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