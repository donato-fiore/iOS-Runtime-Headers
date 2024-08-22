// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUBCALLOCALDBHELPER_H
#define SUBCALLOCALDBHELPER_H


#import <Foundation/Foundation.h>


@interface SubCalLocalDBHelper : NSObject



+(BOOL)_updateConstraintsIfNecessaryForSource:(id)arg0 ;
+(id)_existingCalendarInCalDAVSourceWithExternalID:(id)arg0 inSource:(id)arg1 ;
+(id)_makeCalendarWithExternalId:(id)arg0 inStore:(id)arg1 error:(*id)arg2 ;
+(id)_relativePathFromCalDAVExternalID:(id)arg0 ;
+(id)eventStoreWithClientId:(id)arg0 ;
+(id)initializeCalendarWithExternalId:(id)arg0 inSource:(id)arg1 needsSave:(*BOOL)arg2 error:(*id)arg3 ;
+(id)initializeSourceWithExternalId:(id)arg0 inStore:(id)arg1 needsSave:(*BOOL)arg2 error:(*id)arg3 ;
+(void)_setEventStoreProvider:(id)arg0 ;


@end


#endif