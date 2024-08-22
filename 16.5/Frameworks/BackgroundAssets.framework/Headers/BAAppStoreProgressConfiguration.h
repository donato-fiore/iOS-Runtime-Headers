// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTOREPROGRESSCONFIGURATION_H
#define BAAPPSTOREPROGRESSCONFIGURATION_H

@class NSSet, NSMutableDictionary;
@protocol NSSecureCoding, BAAppStoreProgressObserverConfiguring, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BAAppStoreProgressConfiguration : NSObject <NSSecureCoding, BAAppStoreProgressObserverConfiguring>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    id *_updateHandler;
    NSSet *_appBundleIdentifiers;
    NSMutableDictionary *_duplicateEventCache;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAppBundleIdentifiers:(id)arg0 ;
-(void)setHandlerQueue:(id)arg0 ;
-(void)setUpdateHandler:(id)arg0 ;


@end


#endif