// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMREMOTESQLSTOREMANAGER_H
#define BMREMOTESQLSTOREMANAGER_H



#import "BMSQLStoreManager.h"

@interface BMRemoteSQLStoreManager : BMSQLStoreManager

@property (nonatomic) BOOL remoteOnly; // ivar: _remoteOnly


-(BOOL)hasReadWriteAccessToURL:(id)arg0 ;
-(id)deleteRowsDerivedFromStream:(id)arg0 eventIdentifier:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif