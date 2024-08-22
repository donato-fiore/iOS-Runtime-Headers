// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONBOARDINGCOMPLETIONENTITYENCODER_H
#define HDONBOARDINGCOMPLETIONENTITYENCODER_H



#import "HDEntityEncoder.h"

@interface HDOnboardingCompletionEntityEncoder : HDEntityEncoder



-(id)codableRepresentationForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)objectForPersistentID:(NSInteger)arg0 row:(struct HDSQLiteRow *)arg1 error:(*id)arg2 ;
-(id)orderedProperties;


@end


#endif