// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGEXHAUSTIVEMOMENTLABELLINGQUESTION_H
#define PGEXHAUSTIVEMOMENTLABELLINGQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGExhaustiveMomentLabellingQuestion : PGSurveyQuestion {
    unsigned short _entityType;
    unsigned short _state;
    NSDictionary *_additionalInfo;
    CGFloat _localFactoryScore;
    NSString *_entityIdentifier;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithMomentUUID:(id)arg0 localFactoryScore:(CGFloat)arg1 meaningLabels:(id)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif