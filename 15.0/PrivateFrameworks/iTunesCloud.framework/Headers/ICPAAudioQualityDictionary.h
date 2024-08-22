// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPAAUDIOQUALITYDICTIONARY_H
#define ICPAAUDIOQUALITYDICTIONARY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICPAAudioQualityDictionary : PBCodable <NSCopying>

 {
    NSInteger _bitDepth;
    NSInteger _bitRate;
    NSInteger _sampleRate;
    NSString *_channelLayoutDescription;
    unsigned int _codec;
    BOOL _isSpatialized;
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