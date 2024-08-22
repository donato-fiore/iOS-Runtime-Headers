// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXLOCATIONMANAGERSTATESTOREONDISK_H
#define ATXLOCATIONMANAGERSTATESTOREONDISK_H

@class NSString;
@protocol ATXLocationManagerStateStore, ATXLocationManagerStateStoreOnDiskEnv;

#import <Foundation/Foundation.h>


@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore>

 {
    NSString *_path;
    id<ATXLocationManagerStateStoreOnDiskEnv> *_env;
    id *_deferredLoadCallback;
    int _fd;
}


@property CGFloat cacheExpirationInterval; // ivar: _cacheExpirationInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_tryToOpen;
-(id)initWithLocationParameters:(id)arg0 ;
-(id)initWithPath:(id)arg0 environment:(id)arg1 locationParameters:(id)arg2 ;
-(id)loadNowOrCallLater:(id)arg0 ;
-(void)_deviceDidUnlock;
-(void)clear;
-(void)dealloc;
-(void)write:(id)arg0 ;


@end


#endif