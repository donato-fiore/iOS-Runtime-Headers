// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTMDMCLIENTLIBRARYBACKEDAUTOMATEDDEVICEENROLLMENTPRIMITIVES_H
#define DMTMDMCLIENTLIBRARYBACKEDAUTOMATEDDEVICEENROLLMENTPRIMITIVES_H

@class DEPClient, NSString;
@protocol DMTAutomatedDeviceEnrollmentPrimitives;

#import <Foundation/Foundation.h>


@interface DMTMDMClientLibraryBackedAutomatedDeviceEnrollmentPrimitives : NSObject <DMTAutomatedDeviceEnrollmentPrimitives>



@property (readonly, nonatomic) DEPClient *DEPClient; // ivar: _DEPClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)enrollWithNonce:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif