// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMPRIVACYSETTINGSPROVIDER_H
#define _HMPRIVACYSETTINGSPROVIDER_H

@class NSString;
@protocol _HMPrivacySettingsProvider;

#import <Foundation/Foundation.h>


@interface _HMPrivacySettingsProvider : NSObject <_HMPrivacySettingsProvider>



@property (readonly) NSUInteger cachedAuthorizationStatus; // ivar: _cachedAuthorizationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)queryAuthorizationStatus;
-(void)requestAccessWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif