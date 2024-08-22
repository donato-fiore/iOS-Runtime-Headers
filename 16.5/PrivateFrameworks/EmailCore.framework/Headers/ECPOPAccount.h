// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECPOPACCOUNT_H
#define ECPOPACCOUNT_H



#import "ECAccount.h"

@interface ECPOPAccount : ECAccount

@property (nonatomic) NSInteger bigMessageWarningSize;
@property (nonatomic) NSInteger daysAfterDownloadToDeleteMessagesFromServer;
@property (readonly, nonatomic) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) NSInteger deletionPolicy;
@property (nonatomic) BOOL hasNotFinishedFirstTimeSync;


+(id)standardPorts;
+(id)standardSSLPorts;
-(NSInteger)defaultPortNumber;
-(NSInteger)defaultSecurePortNumber;


@end


#endif