// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDARGONSERVICEXPCWRAPPER_H
#define NTKDARGONSERVICEXPCWRAPPER_H

@class NSString;
@protocol NTKFaceSupportServer;

#import <Foundation/Foundation.h>


@interface NTKDArgonServiceXPCWrapper : NSObject <NTKFaceSupportServer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedXPCWrapper;
-(void)displayUserNotificationForKeyDescriptor:(id)arg0 completion:(id)arg1 ;
-(void)ingestKeyDescriptor:(id)arg0 withMethod:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)knownKeyDescriptors:(id)arg0 ;
-(void)queryForNewFaces:(id)arg0 ;
-(void)requestCurrentEnvironment:(id)arg0 ;
-(void)requestResetOnNextLaunch:(id)arg0 ;
-(void)setCurrentEnvironment:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif