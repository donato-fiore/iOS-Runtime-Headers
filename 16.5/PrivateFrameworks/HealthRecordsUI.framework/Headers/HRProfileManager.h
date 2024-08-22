// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRPROFILEMANAGER_H
#define HRPROFILEMANAGER_H


#import <Foundation/Foundation.h>

#import "HRProfile.h"

@interface HRProfileManager : NSObject {
    ? profileCache;
    ? profileObjectsCache;
    ? managerQueue;
    ? lock;
}


@property (nonatomic, retain) HRProfile *currentProfile; // ivar: currentProfile
@property (nonatomic, readonly) HRProfile *primaryProfile;


+(id)sharedInstance;
-(id)init;
-(id)profileWithHealthStore:(id)arg0 ;
-(id)profileWithProfileIdentifier:(id)arg0 ;
-(void)switchCurrentProfileWithIdentifier:(id)arg0 ;


@end


#endif