// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMSMARTLISTSDATAVIEW_H
#define REMSMARTLISTSDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMSmartListsDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(id)smartListsFromSmartListStorages:(id)arg0 accountStorages:(id)arg1 parentListStorages:(id)arg2 store:(id)arg3 ;
-(id)fetchCustomSmartListWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchCustomSmartListsInAccount:(id)arg0 error:(*id)arg1 ;
-(id)fetchCustomSmartListsInGroup:(id)arg0 error:(*id)arg1 ;
-(id)fetchCustomSmartListsWithError:(*id)arg0 ;
-(id)fetchNonCustomSmartListWithSmartListType:(id)arg0 createIfNeeded:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithStore:(id)arg0 ;


@end


#endif