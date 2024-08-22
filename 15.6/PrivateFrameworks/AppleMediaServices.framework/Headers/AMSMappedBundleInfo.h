// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMAPPEDBUNDLEINFO_H
#define AMSMAPPEDBUNDLEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSMappedBundleInfo : NSObject

@property (retain, nonatomic) NSString *accountMediaType; // ivar: _accountMediaType
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (retain, nonatomic) NSString *scheme; // ivar: _scheme
@property (retain, nonatomic) NSString *secureScheme; // ivar: _secureScheme


+(id)_accountMediaTypeForClientName:(id)arg0 bundleID:(id)arg1 ;
+(id)_clientNameFromProcessInfo:(id)arg0 ;
+(id)_clientVersionFromProcessInfo:(id)arg0 clientName:(id)arg1 ;
+(id)accountMediaTypeInfoForProcessInfo:(id)arg0 ;
+(id)bundleInfoForMobileAppStoreWithProcessInfo:(id)arg0 ;
+(id)bundleInfoForProcessInfo:(id)arg0 ;
+(id)currentBundleInfo;
-(id)_initWithClient:(NSInteger)arg0 processInfo:(id)arg1 ;


@end


#endif