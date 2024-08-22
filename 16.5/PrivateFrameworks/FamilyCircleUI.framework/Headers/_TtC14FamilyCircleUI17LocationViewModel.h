// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI17LOCATIONVIEWMODEL_H
#define _TTC14FAMILYCIRCLEUI17LOCATIONVIEWMODEL_H

@class FASharedService;

#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI17LocationViewModel : NSObject {
    ? familyCircle;
    ? _familyMembersSharingLocationWithMe;
    ? _parentCanToggleChildsLocation;
    ? _disableLocationToggles;
    ? _sharingLocationWithFamilyMembers;
    ? _childCanModifyLocationStatus;
    ? screenTimeConnection;
    ? _locationService;
    ? _membersAutomaticallySharing;
    ? fmfSession;
    ? locationListener;
}


@property (nonatomic, retain) FASharedService *locationService;


+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(id)initWithFamilyCircle:(id)arg0 managementState:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg0 managementState:(id)arg1 fmfSession:(id)arg2 ;
-(void)dealloc;


@end


#endif