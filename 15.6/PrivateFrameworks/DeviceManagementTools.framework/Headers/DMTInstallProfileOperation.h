// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTINSTALLPROFILEOPERATION_H
#define DMTINSTALLPROFILEOPERATION_H

@class CATOperation, NSData;
@protocol DMTProfileInstallationPrimitives, OS_dispatch_queue;



@interface DMTInstallProfileOperation : CATOperation

@property (readonly, nonatomic) NSObject<DMTProfileInstallationPrimitives> *primitives; // ivar: _primitives
@property (readonly, copy, nonatomic) NSData *profileData; // ivar: _profileData
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *profileInstallationQueue; // ivar: _profileInstallationQueue


-(BOOL)isAsynchronous;
-(id)initWithProfileInstallationPrimitives:(id)arg0 profileData:(id)arg1 ;
-(void)cancel;
-(void)installProfile;
-(void)main;


@end


#endif