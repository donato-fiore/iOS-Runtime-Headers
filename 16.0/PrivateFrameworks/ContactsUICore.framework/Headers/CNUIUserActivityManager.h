// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIVITYMANAGER_H
#define CNUIUSERACTIVITYMANAGER_H

@class CNContactStore;
@protocol CNLSApplicationWorkspace, CNUIInteractionDonor;

#import <Foundation/Foundation.h>


@interface CNUIUserActivityManager : NSObject

@property (readonly, nonatomic) NSObject<CNLSApplicationWorkspace> *applicationWorkspace; // ivar: _applicationWorkspace
@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, nonatomic) NSObject<CNUIInteractionDonor> *interactionDonor; // ivar: _interactionDonor


+(id)descriptorForRequiredKeys;
+(id)log;
-(id)initWithApplicationWorkspace:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 applicationWorkspace:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 applicationWorkspace:(id)arg1 interactionDonor:(id)arg2 ;
-(id)makeActivityAdvertisingViewingGroups;
-(id)makeActivityAdvertisingViewingList;
-(id)makeActivityAdvertisingViewingOfContact:(id)arg0 ;
-(void)publishRequestToCreateContact:(id)arg0 ;
-(void)publishRequestToEditContact:(id)arg0 ;
-(void)updateUserActivityState:(id)arg0 withContentsOfContact:(id)arg1 ;
-(void)updateUserActivityState:(id)arg0 withContentsOfListTopContact:(id)arg1 displayedContact:(id)arg2 searchString:(id)arg3 isShowingGroups:(BOOL)arg4 ;


@end


#endif