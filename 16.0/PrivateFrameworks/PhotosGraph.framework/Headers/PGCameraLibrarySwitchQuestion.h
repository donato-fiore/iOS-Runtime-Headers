// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCAMERALIBRARYSWITCHQUESTION_H
#define PGCAMERALIBRARYSWITCHQUESTION_H

@class NSString, NSDictionary;


#import "PGSurveyQuestion.h"

@interface PGCameraLibrarySwitchQuestion : PGSurveyQuestion {
    unsigned short _state;
    NSString *_entityIdentifier;
    NSDictionary *_additionalInfo;
}




-(BOOL)isEquivalentToPersistedQuestion:(id)arg0 ;
-(BOOL)isEquivalentToQuestion:(id)arg0 ;
-(id)additionalInfo;
-(id)entityIdentifier;
-(id)initWithAssetUUID:(id)arg0 libraryScopeUUID:(id)arg1 previousSwitchState:(id)arg2 currentSwitchState:(id)arg3 ;
-(unsigned short)displayType;
-(unsigned short)entityType;
-(unsigned short)state;
-(unsigned short)type;


@end


#endif