// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNAMINGQUESTION_H
#define PGNAMINGQUESTION_H

@class NSDictionary, NSString, PHPerson;


#import "PGSurveyQuestion.h"

@interface PGNamingQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}


@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


+(id)questionForPerson:(id)arg0 ;
-(CGFloat)localFactoryScore;
-(id)_additionalInfoFromContactIdentifier:(id)arg0 ;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithConfirmedPerson:(id)arg0 contactIdentifier:(id)arg1 localFactoryScore:(CGFloat)arg2 ;
-(id)initWithPerson:(id)arg0 contactIdentifier:(id)arg1 localFactoryScore:(CGFloat)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;
-(void)legacyPersist;
-(void)legacyRemove;
-(void)persistWithCreationDate:(id)arg0 ;
-(void)remove;


@end


#endif