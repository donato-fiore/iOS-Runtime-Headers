// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRPLAYBACKSESSIONPROTOBUF_H
#define _MRPLAYBACKSESSIONPROTOBUF_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface _MRPlaybackSessionProtobuf : PBCodable <NSCopying>

 {
    NSString *_identifier;
    NSData *_metadata;
    NSData *_playbackSessionData;
    NSString *_revision;
    NSString *_type;
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