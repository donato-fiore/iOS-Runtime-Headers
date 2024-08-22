// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISLOGOUTOPERATION_H
#define ISLOGOUTOPERATION_H

@class SSAccount, NSString;


#import "ISOperation.h"

@interface ISLogoutOperation : ISOperation

@property (retain, nonatomic) SSAccount *account; // ivar: _account
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey


-(id)_copyAuthenticationContext;
-(id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg0 ;
-(id)_createLogoutRequestProperties;
-(id)_sbsyncData;
-(id)initWithAccount:(id)arg0 logKey:(id)arg1 ;
-(void)_disableAutomaticDownloadKinds;
-(void)_disableBookkeeper;
-(void)_sendLogoutRequest;
-(void)run;


@end


#endif