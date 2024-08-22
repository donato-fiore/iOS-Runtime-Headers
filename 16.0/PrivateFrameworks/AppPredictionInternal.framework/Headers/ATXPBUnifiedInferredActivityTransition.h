// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBUNIFIEDINFERREDACTIVITYTRANSITION_H
#define ATXPBUNIFIEDINFERREDACTIVITYTRANSITION_H

@class PBCodable, NSString;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBUnifiedInferredActivityTransition : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasInferredActivity;
@property (nonatomic) BOOL hasIsActivityStart;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTransitionTime;
@property (nonatomic) NSInteger inferredActivity; // ivar: _inferredActivity
@property (nonatomic) BOOL isActivityStart; // ivar: _isActivityStart
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (nonatomic) CGFloat transitionTime; // ivar: _transitionTime


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif