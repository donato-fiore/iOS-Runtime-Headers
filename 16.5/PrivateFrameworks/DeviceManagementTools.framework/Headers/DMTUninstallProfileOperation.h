// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTUNINSTALLPROFILEOPERATION_H
#define DMTUNINSTALLPROFILEOPERATION_H

@class CATOperation, NSString;
@protocol DMTProfileInstallationPrimitives;



@interface DMTUninstallProfileOperation : CATOperation

@property (readonly, nonatomic) NSObject<DMTProfileInstallationPrimitives> *primitives; // ivar: _primitives
@property (readonly, nonatomic) NSString *profileIdentifier; // ivar: _profileIdentifier


-(BOOL)isAsynchronous;
-(id)initWithProfileInstallationPrimitives:(id)arg0 profileIdentifier:(id)arg1 ;
-(void)cancel;
-(void)main;
-(void)uninstallProfile;


@end


#endif