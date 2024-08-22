// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHENTITLEMENTS_H
#define SHENTITLEMENTS_H


#import <Foundation/Foundation.h>


@interface SHEntitlements : NSObject

@property (readonly, nonatomic) BOOL isEntitledForExternalAudioRecording; // ivar: _isEntitledForExternalAudioRecording
@property (readonly, nonatomic) BOOL isEntitledForInternalAudioRecording; // ivar: _isEntitledForInternalAudioRecording
@property (readonly, nonatomic) BOOL isEntitledForInternalClient; // ivar: _isEntitledForInternalClient
@property (readonly, nonatomic) BOOL isEntitledForMicrophone; // ivar: _isEntitledForMicrophone
@property (nonatomic) BOOL isEntitledForStorefront; // ivar: _isEntitledForStorefront


-(*void)copyValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(BOOL)boolValueOfEntitlement:(id)arg0 fromConnection:(id)arg1 ;
-(BOOL)boolValueOfEntitlement:(id)arg0 fromSecTask:(struct __SecTask *)arg1 ;
-(BOOL)entitlementArray:(id)arg0 containsEntitlementValue:(id)arg1 fromConnection:(id)arg2 ;
-(BOOL)entitlementArray:(id)arg0 containsEntitlementValue:(id)arg1 fromSecTask:(struct __SecTask *)arg2 ;
-(BOOL)hasRequiredEntitlements:(id)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)configureEntitlementsForConnection:(id)arg0 ;
-(void)configureEntitlementsForTask:(struct __SecTask *)arg0 ;


@end


#endif