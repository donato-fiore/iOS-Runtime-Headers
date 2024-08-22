// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NANOPHONEVOICEMAILTRANSCRIPT_H
#define NANOPHONEVOICEMAILTRANSCRIPT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NanoPhoneVoicemailTranscript : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTranscriptionString;
@property (retain, nonatomic) NSString *transcriptionString; // ivar: _transcriptionString
@property (nonatomic) NSInteger voicemailNumber; // ivar: _voicemailNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithTranscriptMessage:(id)arg0 voicemailNumber:(NSUInteger)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif