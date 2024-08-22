// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDSPAMMESSAGECREATOR_H
#define IMDSPAMMESSAGECREATOR_H


#import <Foundation/Foundation.h>


@interface IMDSpamMessageCreator : NSObject



-(BOOL)hasDataDetectedInformalPayment:(id)arg0 ;
-(BOOL)isSurfPayment:(id)arg0 ;
-(id)metaDataForSurfURL:(id)arg0 ;
-(id)reportMessageDictionaryForMessages:(id)arg0 withLastAddressedHandle:(id)arg1 maxMessageLength:(NSUInteger)arg2 isAutoReport:(BOOL)arg3 withChat:(id)arg4 maxMessagesToReport:(NSUInteger)arg5 totalMessageCount:(*NSUInteger)arg6 onlyReportForiMessageService:(BOOL)arg7 notifyInternalSecurity:(BOOL)arg8 ;
-(id)surfURLForIMMessageItem:(id)arg0 ;
-(id)transferForGuid:(id)arg0 ;
-(void)reportUnknownToIDS:(id)arg0 messageID:(id)arg1 isBlackholed:(BOOL)arg2 messageServerTimestamp:(id)arg3 toURI:(id)arg4 ;


@end


#endif