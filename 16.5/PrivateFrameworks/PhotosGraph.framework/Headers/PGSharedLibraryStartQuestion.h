// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREDLIBRARYSTARTQUESTION_H
#define PGSHAREDLIBRARYSTARTQUESTION_H

@class NSString, NSDictionary;


#import "PGSurveyQuestion.h"

@interface PGSharedLibraryStartQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
    NSDictionary *_additionalInfo;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)init;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif