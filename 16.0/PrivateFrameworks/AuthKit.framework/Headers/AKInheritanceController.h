// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKINHERITANCECONTROLLER_H
#define AKINHERITANCECONTROLLER_H

@class NSString, AAFXPCSession;
@protocol AAFXPCSessionDelegate, AKInheritanceInterface;

#import <Foundation/Foundation.h>


@interface AKInheritanceController : NSObject <AAFXPCSessionDelegate, AKInheritanceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AAFXPCSession *remoteService; // ivar: _remoteService
@property (readonly) Class superclass;


-(id)init;
-(id)initWithXPCSession:(id)arg0 ;
-(void)_setupBeneficiaryAliasWithInheritanceContext:(id)arg0 completion:(id)arg1 ;
-(void)fetchManifestOptionsWithInheritanceContext:(id)arg0 completion:(id)arg1 ;
-(void)removeBeneficiaryWithInheritanceContext:(id)arg0 completion:(id)arg1 ;
-(void)setupBeneficiaryWithInheritanceContext:(id)arg0 completion:(id)arg1 ;
-(void)updateBeneficiaryWithInheritanceContext:(id)arg0 completion:(id)arg1 ;


@end


#endif