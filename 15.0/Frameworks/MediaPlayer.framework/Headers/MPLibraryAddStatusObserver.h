// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPLIBRARYADDSTATUSOBSERVER_H
#define MPLIBRARYADDSTATUSOBSERVER_H

@class ICUserIdentity;

#import <Foundation/Foundation.h>

#import "MPCloudController.h"
#import "MPCloudServiceStatusController.h"
#import "MPModelObject.h"

@interface MPLibraryAddStatusObserver : NSObject {
    BOOL _needsStatusUpdate;
    MPCloudController *_cloudController;
    MPCloudServiceStatusController *_cloudServiceStatusController;
}


@property (readonly, nonatomic) MPLibraryAddStatusObserverConfiguration configuration; // ivar: _configuration
@property (readonly, nonatomic) NSInteger currentStatus; // ivar: _currentStatus
@property (readonly, nonatomic) MPModelObject *identifyingModelObject; // ivar: _identifyingModelObject
@property (copy, nonatomic) id *statusBlock; // ivar: _statusBlock
@property (readonly, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


-(NSInteger)_calculateCurrentStatus;
-(id)init;
-(id)initWithUserIdentity:(id)arg0 ;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg0 ;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg0 ;
-(void)_subscriptionStatusDidChangeNotification:(id)arg0 ;
-(void)_transientStateDidChangeNotification:(id)arg0 ;
-(void)_updateCurrentStatus;
-(void)_updateInProgressDidChangeNotification:(id)arg0 ;
-(void)configureWithModelObject:(id)arg0 ;
-(void)dealloc;


@end


#endif