// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSYNCENGINECONFIGURATION_H
#define CKSYNCENGINECONFIGURATION_H

@class NSString, NSData;
@protocol CKPropertiesDescription, CKSyncEngineDataSource, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "CKDatabase.h"

@interface CKSyncEngineConfiguration : NSObject <CKPropertiesDescription>



@property (retain, nonatomic) NSString *apsMachServiceName; // ivar: _apsMachServiceName
@property (nonatomic) BOOL automaticSyncingEnabled; // ivar: _automaticSyncingEnabled
@property (weak, nonatomic) NSObject<CKSyncEngineDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) CKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride; // ivar: _databaseSubscriptionIDOverride
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreSystemConditions; // ivar: _ignoreSystemConditions
@property (retain, nonatomic) NSData *metadata; // ivar: _metadata
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) BOOL useUniqueActivityIdentifiers; // ivar: _useUniqueActivityIdentifiers
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // ivar: _xpcActivityCriteriaOverrides


-(id)init;
-(id)initWithDatabase:(id)arg0 dataSource:(id)arg1 metadata:(id)arg2 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;


@end


#endif