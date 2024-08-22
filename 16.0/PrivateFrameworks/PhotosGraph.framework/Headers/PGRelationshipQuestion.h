// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGRELATIONSHIPQUESTION_H
#define PGRELATIONSHIPQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGRelationshipQuestion : PGSurveyQuestion {
    unsigned short _state;
    unsigned short _displayType;
    unsigned short _entityType;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithRelationshipLabel:(id)arg0 personUUID:(id)arg1 displayString:(id)arg2 localFactoryScore:(CGFloat)arg3 ;
-(id)initWithRelationshipLabel:(id)arg0 personUUID:(id)arg1 localFactoryScore:(CGFloat)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif