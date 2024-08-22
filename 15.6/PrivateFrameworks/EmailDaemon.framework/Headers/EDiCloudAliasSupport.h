// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDICLOUDALIASSUPPORT_H
#define EDICLOUDALIASSUPPORT_H

@class NSString, NSURL, ACAccount;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface EDiCloudAliasSupport : NSObject <EFLoggable>



@property (readonly, nonatomic) NSString *aliasAuthorizationHeader;
@property (readonly, nonatomic) NSURL *aliasLookupURL;
@property (readonly, nonatomic) NSString *aliasUserAgent;
@property (readonly, nonatomic) ACAccount *appleAccount; // ivar: _appleAccount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)_prepareAliasDataForEmailAddresses:(id)arg0 defaultEmailAddress:(id)arg1 ;
-(id)anisetteDataWithError:(*id)arg0 ;
-(id)initWithAppleAccount:(id)arg0 ;
-(void)pushUpdateForAliasDataWithEmailAddresses:(id)arg0 defaultEmailAddress:(id)arg1 ;


@end


#endif