// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14FAMILYCIRCLEUI34FASWIFTUIHOSTINGCONTROLLERPROVIDER_H
#define _TTC14FAMILYCIRCLEUI34FASWIFTUIHOSTINGCONTROLLERPROVIDER_H


#import <Foundation/Foundation.h>


@interface _TtC14FamilyCircleUI34FASwiftUIHostingControllerProvider : NSObject



+(id)familyMemberAccountChangePasswordControllerWithMainAccount:(id)arg0 memberToShow:(id)arg1 familyCircle:(id)arg2 ;
+(id)getCheckListControllerWithSpecifiers:(id)arg0 ;
+(id)getFamilyChecklistHeaderView;
+(id)getFamilySettingsViewControllerWithViewModel:(id)arg0 locationModel:(id)arg1 pictureStore:(id)arg2 appleAccount:(id)arg3 accountManager:(id)arg4 subscriptionDataLoader:(id)arg5 delegate:(id)arg6 ;
+(id)getLocationViewControllerWithViewModel:(id)arg0 pictureStore:(id)arg1 locationSharedService:(id)arg2 ;
-(id)init;


@end


#endif