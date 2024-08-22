// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSVSYSTEMDIALOGMANAGER_H
#define MSVSYSTEMDIALOGMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSVSystemDialogManager : NSObject {
    *__CFDictionary _registeredSystemDialogs;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




+(id)sharedManager;
-(id)init;
-(id)systemDialogForUserNotification:(struct __CFUserNotification *)arg0 ;
-(void)dealloc;
-(void)registerSystemDialog:(id)arg0 forUserNotification:(struct __CFUserNotification *)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(struct __CFUserNotification *)arg0 ;


@end


#endif