// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCHANGENOTIFIER_H
#define TSKCHANGENOTIFIER_H


#import <Foundation/Foundation.h>


@interface TSKChangeNotifier : NSObject {
    *__CFDictionary mChangeSourceObservers;
    *__CFDictionary mChangeSourceOfClassObservers;
    *__CFArray mQueuedObserverListChanges;
    NSUInteger mProcessingChanges;
    id *mQueuedObserverLock;
}




-(BOOL)p_pendingAddOrRemoveOfObserver:(id)arg0 forChangeSource:(id)arg1 ;
-(id)init;
-(id)p_findCountedObserverForObserver:(id)arg0 inArray:(id)arg1 ;
-(void)addObserver:(id)arg0 forChangeSource:(id)arg1 ;
-(void)addObserver:(id)arg0 forChangeSourceOfClass:(Class)arg1 ;
-(void)asyncProcessChanges:(id)arg0 ;
-(void)dealloc;
-(void)p_addObserver:(id)arg0 forChangeSource:(id)arg1 isClass:(BOOL)arg2 ;
-(void)p_queueObserverListChange:(id)arg0 ;
-(void)p_removeObserver:(id)arg0 forChangeSource:(id)arg1 isClass:(BOOL)arg2 ;
-(void)p_updateObserverList;
-(void)removeObserver:(id)arg0 forChangeSource:(id)arg1 ;
-(void)removeObserver:(id)arg0 forChangeSourceOfClass:(Class)arg1 ;
-(void)syncProcessChanges:(id)arg0 ;


@end


#endif