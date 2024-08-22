// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUEXTERNALASRTOKENINFORMATION_H
#define SIRINLUEXTERNALASRTOKENINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SIRINLUEXTERNALAsrTokenInformation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL addSpaceAfter; // ivar: _addSpaceAfter
@property (nonatomic) unsigned int beginIndex; // ivar: _beginIndex
@property (nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore
@property (nonatomic) unsigned int endIndex; // ivar: _endIndex
@property (nonatomic) int endMilliSeconds; // ivar: _endMilliSeconds
@property (nonatomic) BOOL hasAddSpaceAfter;
@property (nonatomic) BOOL hasBeginIndex;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) BOOL hasEndMilliSeconds;
@property (readonly, nonatomic) BOOL hasIpaPhoneSequence;
@property (readonly, nonatomic) BOOL hasPhoneSequence;
@property (readonly, nonatomic) BOOL hasPostItnText;
@property (nonatomic) BOOL hasRemoveSpaceAfter;
@property (nonatomic) BOOL hasRemoveSpaceBefore;
@property (nonatomic) BOOL hasStartMilliSeconds;
@property (retain, nonatomic) NSString *ipaPhoneSequence; // ivar: _ipaPhoneSequence
@property (retain, nonatomic) NSString *phoneSequence; // ivar: _phoneSequence
@property (retain, nonatomic) NSString *postItnText; // ivar: _postItnText
@property (nonatomic) BOOL removeSpaceAfter; // ivar: _removeSpaceAfter
@property (nonatomic) BOOL removeSpaceBefore; // ivar: _removeSpaceBefore
@property (nonatomic) int startMilliSeconds; // ivar: _startMilliSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif