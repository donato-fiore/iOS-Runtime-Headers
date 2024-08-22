// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCBASEURLCONFIGURATION_H
#define FCBASEURLCONFIGURATION_H

@protocol FCCoreConfiguration;

#import <Foundation/Foundation.h>


@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) NSObject<FCCoreConfiguration> *coreConfiguration; // ivar: _coreConfiguration


+(BOOL)hasOverrideCAPIURL;
+(id)CAPIBaseURLForConfiguration:(id)arg0 ;
+(id)fairPlayBaseURLForConfiguration:(id)arg0 ;
+(id)newsletterBaseURLForConfiguration:(id)arg0 ;
+(id)notificationsBaseURLForConfiguration:(id)arg0 ;
+(id)overrideCAPIURLString;
+(id)searchBaseURLForConfiguration:(id)arg0 ;
-(id)CAPIBaseURL;
// -(id)baseURL:(id)arg0 fallback:(unk)arg1  ;
// -(id)baseURLString:(id)arg0 fallback:(unk)arg1  ;
-(id)fairPlayBaseURL;
-(id)initWithCoreConfiguration:(id)arg0 ;
-(id)newsletterBaseURL;
-(id)notificationsBaseURL;
-(id)searchBaseURLForConfiguration;


@end


#endif