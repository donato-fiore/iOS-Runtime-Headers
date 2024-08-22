// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSMODEASSERTIONMANAGERUPDATECONTEXT_H
#define DNDSMODEASSERTIONMANAGERUPDATECONTEXT_H

@class NSString;
@protocol DNDSModeAssertionUpdateContext;

#import <Foundation/Foundation.h>

#import "DNDSClientDetailsProvider.h"
#import "DNDSModeAssertionStore.h"
#import "DNDSModeAssertionUpdateResult.h"

@interface DNDSModeAssertionManagerUpdateContext : NSObject <DNDSModeAssertionUpdateContext>

 {
    DNDSClientDetailsProvider *_clientDetailsProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) DNDSModeAssertionStore *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) DNDSModeAssertionUpdateResult *updateResult; // ivar: _updateResult


-(id)_calculateUpdateResultForStore:(id)arg0 previousStore:(id)arg1 ;
-(id)initWithStore:(id)arg0 clientDetailsProvider:(id)arg1 ;
-(id)invalidateAssertionsForRequest:(id)arg0 ;
-(id)modeAssertionInvalidationsMatchingPredicate:(id)arg0 ;
-(id)modeAssertionsMatchingPredicate:(id)arg0 ;
-(id)takeAssertionWithDetails:(id)arg0 source:(id)arg1 startDate:(id)arg2 ;
-(id)takeAssertionWithUUID:(id)arg0 details:(id)arg1 source:(id)arg2 startDate:(id)arg3 ;
-(void)_cleanupStore:(id)arg0 ;
-(void)_resolveStore:(id)arg0 ;


@end


#endif