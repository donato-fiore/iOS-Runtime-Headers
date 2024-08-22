// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSERVICE_H
#define SBAPPLICATIONSERVICE_H

@class NSString;
@protocol SBApplicationServerMiscDelegate;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"

@interface SBApplicationService : NSObject <SBApplicationServerMiscDelegate>

 {
    SBApplicationController *_applicationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_initWithApplicationController:(id)arg0 ;
-(void)applicationServer:(id)arg0 client:(id)arg1 deleteSnapshotsForApplicationIdentifier:(id)arg2 ;


@end


#endif