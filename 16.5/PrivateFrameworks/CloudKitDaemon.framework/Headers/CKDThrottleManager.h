// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDTHROTTLEMANAGER_H
#define CKDTHROTTLEMANAGER_H

@class CKThrottleManager, CKThrottleTable;


#import "CKDThrottleTableGroup.h"
#import "CKDLogicalDeviceContext.h"

@interface CKDThrottleManager : CKThrottleManager {
    CKDThrottleTableGroup *_throttleTableGroup;
    CKThrottleTable *_throttleTable;
}


@property (readonly, weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext


+(id)_expirationDateForTTLSeconds:(unsigned int)arg0 ;
+(id)throttleFromPThrottlingConfig:(id)arg0 ;
+(id)throttleFromServerJSONDictionary:(id)arg0 ;
-(BOOL)addThrottle:(id)arg0 ;
-(id)initWithDeviceContext:(id)arg0 ;
-(id)throttleTable:(BOOL)arg0 ;
-(void)invalidateAdopterThrottles;
-(void)loadThrottlesFromDatabase;
-(void)noteDataChangeForThrottle:(id)arg0 ;
-(void)throttleListBecameEmpty;
-(void)throttleWasAdded:(id)arg0 ;
-(void)throttleWillBeRemoved:(id)arg0 ;


@end


#endif