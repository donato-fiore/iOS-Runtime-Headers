// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMERGECANDIDATEQUESTION_H
#define PGMERGECANDIDATEQUESTION_H

@class NSString, NSDictionary, PHPerson;


#import "PGSurveyQuestion.h"

@interface PGMergeCandidateQuestion : PGSurveyQuestion {
    unsigned short _type;
    unsigned short _displayType;
    unsigned short _state;
    unsigned short _entityType;
    NSString *_entityIdentifier;
    CGFloat _score;
    NSDictionary *_additionalInfo;
}


@property (readonly, nonatomic) PHPerson *person; // ivar: _person


+(id)questionForPerson:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuestion:(id)arg0 ;
-(CGFloat)score;
-(NSUInteger)hash;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithPerson:(id)arg0 score:(CGFloat)arg1 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;
-(void)persistWithCreationDate:(id)arg0 questionVersion:(short)arg1 ;
-(void)remove;
-(void)setScore:(CGFloat)arg0 ;


@end


#endif