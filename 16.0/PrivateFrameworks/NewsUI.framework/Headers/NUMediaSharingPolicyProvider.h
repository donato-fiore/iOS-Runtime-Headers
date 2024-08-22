// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUMEDIASHARINGPOLICYPROVIDER_H
#define NUMEDIASHARINGPOLICYPROVIDER_H

@class NSString;
@protocol SXMediaSharingPolicyProvider, FCNewsAppConfigurationManager, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>



@property (readonly, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly, nonatomic) NSUInteger mediaSharingPolicy;
@property (readonly) Class superclass;


-(id)initWithHeadline:(id)arg0 appConfigurationManager:(id)arg1 ;


@end


#endif