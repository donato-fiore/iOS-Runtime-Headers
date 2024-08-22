// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSEXTERNALSYSTEMSERVICE_H
#define PRSEXTERNALSYSTEMSERVICE_H


#import <Foundation/Foundation.h>

#import "PRSService.h"

@interface PRSExternalSystemService : NSObject {
    PRSService *_service;
}




-(id)service;
-(void)createLockScreenPhotosPosterWithImageAtURL:(id)arg0 selectLockScreenPoster:(BOOL)arg1 completion:(id)arg2 ;
-(void)fetchEligibleConfigurationsWithCompletion:(id)arg0 ;
-(void)updateHomeScreenImageForLockScreenPoster:(id)arg0 withImageAtURL:(id)arg1 selectLockPoster:(BOOL)arg2 completion:(id)arg3 ;
-(void)updateLockScreenPhotosPoster:(id)arg0 withImageAtURL:(id)arg1 selectLockScreenPoster:(BOOL)arg2 completion:(id)arg3 ;
-(void)updatePosterMatchingUUID:(id)arg0 withConfiguration:(id)arg1 completion:(id)arg2 ;


@end


#endif