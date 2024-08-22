// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFCASTLEEMAILALIASUPDATER_H
#define MFCASTLEEMAILALIASUPDATER_H

@class NSString, EDiCloudAliasSupport;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFCastleEmailAliasUpdater : NSObject {
    BOOL _isRunning;
    unsigned int _requestCount;
    NSString *_accountID;
    EDiCloudAliasSupport *_aliasSupport;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)initWithAccountID:(id)arg0 aliasSupport:(id)arg1 ;
-(void)getEmailAddressAndAliasesWithLastSyncDate:(id)arg0 entityTag:(id)arg1 handler:(id)arg2 ;


@end


#endif