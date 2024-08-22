// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECORDSTOREMANAGER_H
#define RECORDSTOREMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RecordStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)fetchRecordSetForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)fetchSavedRecordInfoForBundleId:(id)arg0 completion:(id)arg1 ;


@end


#endif