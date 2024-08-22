// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCLOUDKITMIRRORINGDELEGATEPREJAZZKONMETADATA_H
#define NSCLOUDKITMIRRORINGDELEGATEPREJAZZKONMETADATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "NSPersistentStore.h"
#import "NSPersistentHistoryToken.h"

@interface NSCloudKitMirroringDelegatePreJazzkonMetadata : NSObject {
    NSPersistentStore *_store;
    BOOL _loaded;
    BOOL _hasChanges;
    BOOL _hasInitializedZone;
    BOOL _hasInitializedZoneSubscription;
    BOOL _hasInitializedDatabaseSubscription;
    NSString *_ckIdentityRecordName;
    BOOL _hasCheckedCKIdentity;
    NSDictionary *_keyToPreviousServerChangeToken;
    NSPersistentHistoryToken *_lastHistoryToken;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithStore:(id)arg0 ;
-(void)dealloc;


@end


#endif