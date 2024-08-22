// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFREQUENTLOCATIONQUESTION_H
#define PGFREQUENTLOCATIONQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGFrequentLocationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithAssetUUID:(id)arg0 location:(id)arg1 locationTypeName:(id)arg2 localFactoryScore:(CGFloat)arg3 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif