// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSHOMESCREENSERVICEHOMESCREENLAYOUTAVAILABILITYOBSERVATIONASSERTION_H
#define SBSHOMESCREENSERVICEHOMESCREENLAYOUTAVAILABILITYOBSERVATIONASSERTION_H

@class NSString;
@protocol BSInvalidatable, SBSHomeScreenServiceLayoutAvailableObserver;

#import <Foundation/Foundation.h>

#import "SBSHomeScreenService.h"

@interface SBSHomeScreenServiceHomeScreenLayoutAvailabilityObservationAssertion : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, weak, nonatomic) NSObject<SBSHomeScreenServiceLayoutAvailableObserver> *observer; // ivar: _observer
@property (weak, nonatomic) SBSHomeScreenService *service; // ivar: _service
@property (readonly) Class superclass;


-(id)initWithObserver:(id)arg0 service:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif