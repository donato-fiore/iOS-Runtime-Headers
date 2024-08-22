// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOKEYBAGNOTIFICATION_H
#define GEOKEYBAGNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface GEOKeyBagNotification : NSObject {
    int _currentState;
    int _notifyToken;
}


@property (readonly, nonatomic) int state;


+(BOOL)canAccessFilesWithProtection:(NSUInteger)arg0 ;
+(id)sharedObject;
-(BOOL)addDataDidBecomeAvailableObserver:(id)arg0 ifTypeIsNotCurrentlyAccessible:(NSUInteger)arg1 ;
-(BOOL)canAccessFilesWithProtection:(NSUInteger)arg0 ;
-(id)init;
-(void)_statusChanged;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)updateState;


@end


#endif