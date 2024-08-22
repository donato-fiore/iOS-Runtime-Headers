// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOFTWAREUPDATESERVICE_H
#define SBSOFTWAREUPDATESERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBSystemServiceServerSoftwareUpdateDelegate;

#import <Foundation/Foundation.h>


@interface SBSoftwareUpdateService : NSObject <SBSystemServiceServerSoftwareUpdateDelegate>

 {
    FBServiceClientAuthenticator *_serviceClientSoftwareUpdatePasscodePolicyEntitlementAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 passcodePolicy:(id)arg2 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setPasscodePolicy:(NSInteger)arg2 ;


@end


#endif