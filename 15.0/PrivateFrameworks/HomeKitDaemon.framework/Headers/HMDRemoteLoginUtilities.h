// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGINUTILITIES_H
#define HMDREMOTELOGINUTILITIES_H


#import <Foundation/Foundation.h>


@interface HMDRemoteLoginUtilities : NSObject



+(NSInteger)serviceTypeForAccountService:(NSUInteger)arg0 ;
+(id)idmsAccountForAccountWithUsername:(id)arg0 altDSID:(id)arg1 DSID:(id)arg2 ;
+(id)primaryITunesAccount;


@end


#endif