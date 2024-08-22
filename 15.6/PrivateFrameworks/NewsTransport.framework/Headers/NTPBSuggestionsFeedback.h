// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTPBSUGGESTIONSFEEDBACK_H
#define NTPBSUGGESTIONSFEEDBACK_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *feedback; // ivar: _feedback
@property (retain, nonatomic) NSMutableArray *grades; // ivar: _grades
@property (readonly, nonatomic) BOOL hasFeedback;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)gradesAtIndex:(NSUInteger)arg0 ;
-(void)addGrades:(id)arg0 ;
-(void)clearGrades;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif