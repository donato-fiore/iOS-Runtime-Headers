// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFWEBBOOKMARKCOLLECTION_H
#define SFWEBBOOKMARKCOLLECTION_H

@class WebBookmarkCollection;



@interface SFWebBookmarkCollection : WebBookmarkCollection



+(BOOL)isLockedSync;
+(BOOL)isSyncAllowed;
+(BOOL)lockSync;
+(void)holdLockSync:(*void)arg0 ;
+(void)unholdLockSync:(*void)arg0 ;
+(void)unlockSync;
+(void)unlockSyncAsynchronously;
-(id)initWithConfiguration:(id)arg0 checkIntegrity:(BOOL)arg1 ;


@end


#endif