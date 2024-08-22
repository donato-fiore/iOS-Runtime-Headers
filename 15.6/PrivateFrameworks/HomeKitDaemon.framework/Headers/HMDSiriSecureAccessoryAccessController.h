// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSIRISECUREACCESSORYACCESSCONTROLLER_H
#define HMDSIRISECUREACCESSORYACCESSCONTROLLER_H

@class NSUserDefaults;
@protocol HMDSiriSecureAccessoryAccessControllerDataSource;

#import <Foundation/Foundation.h>

#import "HMDAssistantWatchAuthenticationDataSource.h"

@interface HMDSiriSecureAccessoryAccessController : NSObject {
    id<HMDSiriSecureAccessoryAccessControllerDataSource> *_dataSource;
    HMDAssistantWatchAuthenticationDataSource *_watchAuthDataSource;
    NSUserDefaults *_pineBoardUserDefaults;
}




-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 watchAuthDataSource:(id)arg1 pineBoardUserDefaults:(id)arg2 ;
-(void)isUnsecuringSiriActionAllowedWithCompletion:(id)arg0 ;


@end


#endif