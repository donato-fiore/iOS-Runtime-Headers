// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKINSTRUCTOREXTENSIONPROXY_H
#define CRKINSTRUCTOREXTENSIONPROXY_H

@class LSApplicationWorkspace, NSExtension, NSUUID, NSString;
@protocol LSApplicationWorkspaceObserverProtocol;

#import <Foundation/Foundation.h>


@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol>

 {
    LSApplicationWorkspace *mWorkspace;
    NSExtension *mInstructorExtension;
    NSUUID *mContextIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedExtensionProxy;
-(BOOL)proxiesContainClassroomApp:(id)arg0 ;
-(id)extensionAttributesForExtensionIdentifier:(id)arg0 containingAppURL:(id)arg1 ;
-(id)init;
-(void)applicationInstallsDidStart:(id)arg0 ;
-(void)beginExtensionRequestWithCompletionBlock:(id)arg0 ;
-(void)configureInstructorExtensionAfterFetchError:(id)arg0 completionBlock:(id)arg1 ;
-(void)dealloc;
-(void)establishEndpointWithCompletionBlock:(id)arg0 ;
-(void)fetchListenerEndpointForExtensionBundleIdentifier:(id)arg0 fromClassroomBundleWithURL:(id)arg1 completionBlock:(id)arg2 ;
-(void)fetchListenerEndpointWithCompletionBlock:(id)arg0 ;
-(void)resetExtension;


@end


#endif