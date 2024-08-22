// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYQUALITYQUESTION_H
#define PGMEMORYQUALITYQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGMemoryQualityQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithMemory:(id)arg0 localFactoryScore:(CGFloat)arg1 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif