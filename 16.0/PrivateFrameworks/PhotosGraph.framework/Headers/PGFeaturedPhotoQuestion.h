// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGFEATUREDPHOTOQUESTION_H
#define PGFEATUREDPHOTOQUESTION_H

@class NSDictionary, NSString;


#import "PGSurveyQuestion.h"

@interface PGFeaturedPhotoQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSDictionary *_additionalInfo;
    NSString *_entityIdentifier;
}




-(BOOL)isEquivalentToQuestion:(id)arg0 ;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithAssetUUID:(id)arg0 suggestionType:(unsigned short)arg1 suggestionSubtype:(unsigned short)arg2 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif