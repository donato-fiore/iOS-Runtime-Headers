// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSYNDICATEDASSETSQUESTION_H
#define PGSYNDICATEDASSETSQUESTION_H

@class NSString;


#import "PGSurveyQuestion.h"

@interface PGSyndicatedAssetsQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
}




-(BOOL)isEquivalentToPersistedQuestion:(id)arg0 ;
-(BOOL)isEquivalentToQuestion:(id)arg0 ;
-(id)entityIdentifier;
-(id)initWithAssetSyndicationIdentifier:(id)arg0 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif