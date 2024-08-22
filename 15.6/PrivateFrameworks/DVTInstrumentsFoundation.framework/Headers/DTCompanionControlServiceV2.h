// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTCOMPANIONCONTROLSERVICEV2_H
#define DTCOMPANIONCONTROLSERVICEV2_H

@class DTXService, NSString;
@protocol DTCompanionControlServiceV2API;



@interface DTCompanionControlServiceV2 : DTXService <DTCompanionControlServiceV2API>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(*unk)dlsymFunc;
+(void)registerCapabilities:(id)arg0 ;
+(void)setDlsymFunc:(*unk)arg0 ;
-(id)_launchModeTranslationsMap;
-(id)launchWatchAppForCompanionIdentifier:(id)arg0 options:(id)arg1 ;
-(id)terminateWatchAppForCompanionIdentifier:(id)arg0 options:(id)arg1 ;
-(id)willInstallWatchAppForCompanionIdentifier:(id)arg0 ;


@end


#endif