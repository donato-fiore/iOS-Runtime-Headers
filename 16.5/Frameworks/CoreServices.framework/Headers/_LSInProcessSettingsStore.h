// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSINPROCESSSETTINGSSTORE_H
#define _LSINPROCESSSETTINGSSTORE_H

@protocol OS_dispatch_queue;


#import "LSSettingsStore.h"

@interface _LSInProcessSettingsStore : LSSettingsStore

@property *sqlite3 database; // ivar: _database
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue


-(id)init;
-(unsigned char)_internalQueue_selectUserElectionForIdentifier:(id)arg0 ;
-(unsigned char)userElectionForExtensionKey:(id)arg0 ;
-(void)dealloc;


@end


#endif