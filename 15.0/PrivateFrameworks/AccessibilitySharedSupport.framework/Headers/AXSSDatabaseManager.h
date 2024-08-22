// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSDATABASEMANAGER_H
#define AXSSDATABASEMANAGER_H

@class NSManagedObjectContext;

#import <Foundation/Foundation.h>


@interface AXSSDatabaseManager : NSObject {
    int _lockNotificationToken;
    BOOL _isScreenedLocked;
}


@property (readonly, nonatomic) BOOL canSave;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext


+(id)sharedDatabase;
-(id)cloudObjectFromLocalObjects:(id)arg0 withTable:(id)arg1 andObjectID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)userAuthChanged;


@end


#endif