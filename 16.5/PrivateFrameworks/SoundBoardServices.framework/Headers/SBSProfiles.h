// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSPROFILES_H
#define SBSPROFILES_H

@class NSXPCConnection;
@protocol SBSProfilesImplementer;

#import <Foundation/Foundation.h>


@interface SBSProfiles : NSObject {
    NSXPCConnection *_sbConnection;
    id<SBSProfilesImplementer> *_sbProxy;
}




-(id)init;
-(id)initWithTarget:(id)arg0 ;
-(void)dealloc;
-(void)getInstalledProfiles:(id)arg0 ;
-(void)installProfileData:(id)arg0 completion:(id)arg1 ;
-(void)removeProfileByIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif