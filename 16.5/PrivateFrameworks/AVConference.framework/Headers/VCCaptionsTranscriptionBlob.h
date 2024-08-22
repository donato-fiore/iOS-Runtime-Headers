// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCAPTIONSTRANSCRIPTIONBLOB_H
#define VCCAPTIONSTRANSCRIPTIONBLOB_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface VCCaptionsTranscriptionBlob : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsFinal;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL isFinal; // ivar: _isFinal
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (retain, nonatomic) NSMutableArray *segments; // ivar: _segments
@property (nonatomic) unsigned int updateNumber; // ivar: _updateNumber
@property (nonatomic) unsigned int utteranceNumber; // ivar: _utteranceNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSFTranscription:(id)arg0 final:(BOOL)arg1 isLocal:(BOOL)arg2 utteranceNumber:(unsigned int)arg3 updateNumber:(unsigned int)arg4 ;
-(id)segmentsAtIndex:(NSUInteger)arg0 ;
-(void)addSegments:(id)arg0 ;
-(void)clearSegments;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif