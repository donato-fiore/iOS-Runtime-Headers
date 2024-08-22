// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLICATIONREGISTRY_H
#define HMDAPPLICATIONREGISTRY_H

@class HMFObject, NSMutableSet, LSApplicationWorkspace, NSArray, NSString;
@protocol HMFLogging, LSApplicationWorkspaceObserverProtocol, HMFLocking;



@interface HMDApplicationRegistry : HMFObject <HMFLogging, LSApplicationWorkspaceObserverProtocol>

 {
    id<HMFLocking> *_lock;
    NSMutableSet *_applications;
    LSApplicationWorkspace *_workspace;
}


@property (readonly, copy) NSArray *applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedRegistry;
-(id)applicationInfoForBundleIdentifier:(id)arg0 ;
-(id)applicationInfoForBundleURL:(id)arg0 ;
-(id)init;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)dealloc;


@end


#endif