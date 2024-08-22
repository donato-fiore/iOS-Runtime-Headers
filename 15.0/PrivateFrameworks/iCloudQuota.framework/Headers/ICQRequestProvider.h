// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQREQUESTPROVIDER_H
#define ICQREQUESTPROVIDER_H

@class ACAccount;

#import <Foundation/Foundation.h>


@interface ICQRequestProvider : NSObject {
    ACAccount *_account;
}




+(BOOL)attemptSetRequest:(id)arg0 toPostWithJSONDict:(id)arg1 ;
+(id)stringTimeOfLastBackup;
+(void)addEntriesToPostDictionary:(id)arg0 forStub:(id)arg1 ;
-(id)getBackupDeviceUUID;
-(id)initWithAccount:(id)arg0 ;
-(id)urlForQuotaKey:(id)arg0 ;
-(void)addBasicAndCloudBackupHeadersToRequest:(id)arg0 ;
-(void)addBasicHeadersToRequest:(id)arg0 ;
-(void)addCommonHeadersToRequest:(id)arg0 ;


@end


#endif