// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORESOCIALSERVICETRANSIENTSTATESSNAPSHOT_H
#define MPSTORESOCIALSERVICETRANSIENTSTATESSNAPSHOT_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}




-(NSInteger)transientFollowPendingRequestStateForPerson:(id)arg0 ;
-(NSInteger)transientFollowStateForPerson:(id)arg0 ;
-(id)init;
-(void)_addTransientFollowState:(NSInteger)arg0 transientFollowPendingRequestState:(NSInteger)arg1 forPerson:(id)arg2 ;


@end


#endif