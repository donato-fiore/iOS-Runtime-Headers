// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMAPPSTOREDATAVIEW_H
#define REMAPPSTOREDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMAppStoreDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchAppStoreCloudConfigurationPropertiesWithError:(*id)arg0 ;
-(id)fetchCreatedOrCompletedRemindersCountFromDate:(id)arg0 toDate:(id)arg1 error:(*id)arg2 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif