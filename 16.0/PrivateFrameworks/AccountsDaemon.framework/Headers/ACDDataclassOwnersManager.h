// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACDDATACLASSOWNERSMANAGER_H
#define ACDDATACLASSOWNERSMANAGER_H

@class NSXPCConnection, NSLock;

#import <Foundation/Foundation.h>


@interface ACDDataclassOwnersManager : NSObject {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
}




-(BOOL)isPerformingDataclassActionsForAccount:(id)arg0 ;
-(BOOL)performDataclassActions:(id)arg0 forAccount:(id)arg1 withChildren:(id)arg2 withError:(*id)arg3 ;
-(id)_dataclassOwnersManagerConnection;
-(id)actionsForAddingAccount:(id)arg0 affectingDataclass:(id)arg1 withError:(*id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg0 affectingDataclass:(id)arg1 withError:(*id)arg2 ;
-(id)actionsForDisablingDataclass:(id)arg0 onAccount:(id)arg1 withError:(*id)arg2 ;
-(id)actionsForEnablingDataclass:(id)arg0 onAccount:(id)arg1 withError:(*id)arg2 ;
-(id)init;
-(void)preloadDataclassOwnersWithError:(*id)arg0 ;


@end


#endif