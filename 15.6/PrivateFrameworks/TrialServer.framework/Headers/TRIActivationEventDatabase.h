// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIACTIVATIONEVENTDATABASE_H
#define TRIACTIVATIONEVENTDATABASE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIActivationEventDatabase : NSObject {
    TRIDatabase *_db;
}




-(id)activationEventRecordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(struct ? )addRecordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 osBuild:(id)arg3 languageCode:(id)arg4 regionCode:(id)arg5 transaction:(id)arg6 ;
-(struct ? )deleteRecordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif