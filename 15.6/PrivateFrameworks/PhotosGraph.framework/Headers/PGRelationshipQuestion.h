// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGRELATIONSHIPQUESTION_H
#define PGRELATIONSHIPQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGRelationshipQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithRelationshipLabel:(id)arg0 personUUID:(id)arg1 localFactoryScore:(CGFloat)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif