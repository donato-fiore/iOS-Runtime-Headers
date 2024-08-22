// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLINMEMORYCACHEDSTORE_H
#define PMLINMEMORYCACHEDSTORE_H



#import "PMLTrainingStore.h"
#import "PMLTrainingStoredSessionBatch.h"

@interface PMLInMemoryCachedStore : PMLTrainingStore {
    PMLTrainingStoredSessionBatch *_cachedSessions;
}




+(id)cachedStoreFromRealStore:(id)arg0 sessionDescriptor:(id)arg1 sessionsLimit:(NSUInteger)arg2 ;
-(id)initWithSessionBatch:(id)arg0 ;
-(void)_openDbIfUnlocked;
-(void)_registerUnlockHandler;
-(void)loadSessionsForModel:(id)arg0 excludeItemIdsUsedWithin:(CGFloat)arg1 limit:(NSUInteger)arg2 onlyAppleInternal:(BOOL)arg3 positiveLabel:(NSUInteger)arg4 skew:(CGFloat)arg5 block:(id)arg6 ;


@end


#endif