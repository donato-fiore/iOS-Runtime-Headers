// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSNAPSHOTUTILITIES_H
#define CKSNAPSHOTUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKSnapshotUtilities : NSObject



+(BOOL)snapshotExistsForGUID:(id)arg0 ;
+(NSInteger)_convertUserInterfaceStyle:(NSInteger)arg0 ;
+(id)_snapshotAtURL:(id)arg0 ;
+(id)_snapshotViewForGUID:(id)arg0 ;
+(id)snapshotForGUID:(id)arg0 ;
+(id)snapshotKeyWithGuid:(id)arg0 ;
+(void)_cacheSnapshotView:(id)arg0 forGUID:(id)arg1 ;
+(void)_saveSnapshot:(id)arg0 url:(id)arg1 ;
+(void)cacheSnapshot:(id)arg0 guid:(id)arg1 postChangeNotification:(BOOL)arg2 ;


@end


#endif