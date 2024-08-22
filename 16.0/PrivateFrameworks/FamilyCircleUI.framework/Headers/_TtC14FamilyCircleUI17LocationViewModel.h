// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14FAMILYCIRCLEUI17LOCATIONVIEWMODEL_H
#define _TTC14FAMILYCIRCLEUI17LOCATIONVIEWMODEL_H


#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI17LocationViewModel : NSObject {
    ? familyCircle;
    ? _familyMembersSharingLocationWithMe;
    ? _sharingLocationWithFamilyMembers;
    ? _childCanModifyLocationSharingMap;
    ? _membersAutomaticallySharing;
    ? fmfSession;
    ? locationListener;
}




+(id)sharedInstance;
+(void)setSharedInstance:(id)arg0 ;
-(id)init;
-(id)initWithFamilyCircle:(id)arg0 ;
-(void)dealloc;


@end


#endif