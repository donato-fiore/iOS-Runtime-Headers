// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSREADINGDATAMIGRATIONMANAGERCLIENT_H
#define BDSREADINGDATAMIGRATIONMANAGERCLIENT_H

@class NSString;
@protocol BDSReadingDataMigrationService;

#import <Foundation/Foundation.h>

#import "BDSServiceProxy.h"

@interface BDSReadingDataMigrationManagerClient : NSObject <BDSReadingDataMigrationService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


-(id)init;
-(void)mergeMovedReadingHistoryDataWithCompletionHandler:(id)arg0 ;


@end


#endif