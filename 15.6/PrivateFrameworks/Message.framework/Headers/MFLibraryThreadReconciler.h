// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFLIBRARYTHREADRECONCILER_H
#define MFLIBRARYTHREADRECONCILER_H

@class EDPersistenceHookRegistry, EDPersistenceDatabase, EDThreadPersistence;

#import <Foundation/Foundation.h>


@interface MFLibraryThreadReconciler : NSObject {
    EDPersistenceHookRegistry *_hookRegistry;
    EDPersistenceDatabase *_database;
    EDThreadPersistence *_threadPersistence;
}




-(id)initWithHookRegistry:(id)arg0 persistence:(id)arg1 ;
-(void)reconcileAllObjectsWithWindow:(id)arg0 ;
-(void)reconcileWithThreadsWithConversationIDs:(id)arg0 window:(id)arg1 ;


@end


#endif