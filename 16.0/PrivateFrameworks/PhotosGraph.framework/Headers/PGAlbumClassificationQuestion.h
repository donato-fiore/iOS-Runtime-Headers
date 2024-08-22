// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGALBUMCLASSIFICATIONQUESTION_H
#define PGALBUMCLASSIFICATIONQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGAlbumClassificationQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
    CGFloat _localFactoryScore;
}




-(CGFloat)localFactoryScore;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithAlbumUUID:(id)arg0 localFactoryScore:(CGFloat)arg1 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif