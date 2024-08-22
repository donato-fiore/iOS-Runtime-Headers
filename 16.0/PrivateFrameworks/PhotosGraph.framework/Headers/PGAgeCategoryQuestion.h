// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGAGECATEGORYQUESTION_H
#define PGAGECATEGORYQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGAgeCategoryQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithPersonUUID:(id)arg0 ageCategory:(NSUInteger)arg1 localFactoryScore:(CGFloat)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif