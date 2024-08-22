// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKEXPRESSGYMKITAVAILABILITYMANAGER_H
#define NPKEXPRESSGYMKITAVAILABILITYMANAGER_H

@class PKPaymentPass, NSString;
@protocol NPKExpressGymKitConflictResolver, NPKExpressGymKitAvailabilityManagerDelegate;

#import <Foundation/Foundation.h>


@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver>

 {
    int _notificationToken;
}


@property (readonly, nonatomic) PKPaymentPass *conflictingPass;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKExpressGymKitAvailabilityManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExpressGymKitAllowed;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)allowEnableExpressGymKitWithVisibleViewController:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;


@end


#endif