// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCLIENTDATABASEMANAGER_H
#define VCPCLIENTDATABASEMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPClientDatabaseManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_databases;
}




+(id)sharedDatabaseForPhotoLibrary:(id)arg0 ;
+(id)sharedDatabaseManager;
-(id)init;
-(id)sharedDatabaseForPhotoLibrary:(id)arg0 ;


@end


#endif