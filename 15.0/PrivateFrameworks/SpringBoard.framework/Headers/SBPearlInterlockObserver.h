// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPEARLINTERLOCKOBSERVER_H
#define SBPEARLINTERLOCKOBSERVER_H

@class NSString;
@protocol SBUIBiometricResourceObserver, SBUIBiometricResource;

#import <Foundation/Foundation.h>


@interface SBPearlInterlockObserver : NSObject <SBUIBiometricResourceObserver>

 {
    id<SBUIBiometricResource> *_biometricResource;
    BOOL _fired;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBiometricResource:(id)arg0 ;
-(void)_checkForLockout;
-(void)_fire;
-(void)activate;
-(void)biometricResource:(id)arg0 matchingEnabledDidChange:(BOOL)arg1 ;
-(void)biometricResource:(id)arg0 observeEvent:(NSUInteger)arg1 ;
-(void)deactivate;


@end


#endif