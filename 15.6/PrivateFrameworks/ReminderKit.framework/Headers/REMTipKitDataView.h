// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMTIPKITDATAVIEW_H
#define REMTIPKITDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMTipKitDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchCompletedRemindersCountInList:(id)arg0 error:(*id)arg1 ;
-(id)fetchCompletedRemindersCountWithError:(*id)arg0 ;
-(id)fetchCustomSmartListsCountWithError:(*id)arg0 ;
-(id)fetchHashtagsCountWithError:(*id)arg0 ;
-(id)fetchListsCountWithError:(*id)arg0 ;
-(id)fetchListsWithCustomBadgeCountWithError:(*id)arg0 ;
-(id)fetchUncompletedRemindersCountWithError:(*id)arg0 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif