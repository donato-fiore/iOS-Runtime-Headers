// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(struct ? )addRecordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 osBuild:(id)arg3 languageCode:(id)arg4 regionCode:(id)arg5 carrierBundleId:(id)arg6 carrierCountryCode:(id)arg7 transaction:(id)arg8 ;
-(struct ? )deleteRecordWithParentId:(id)arg0 factorPackSetId:(id)arg1 deploymentId:(int)arg2 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif