// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMAILBOXUIDTRANSFORMER_H
#define MFMAILBOXUIDTRANSFORMER_H


#import <Foundation/Foundation.h>


@interface MFMailboxUidTransformer : NSObject



+(BOOL)isMailbox:(id)arg0 equalTo:(id)arg1 uidToMailboxMap:(id)arg2 ;
-(id)_transformMailboxUid:(id)arg0 parent:(id)arg1 uidToMailboxMap:(id)arg2 objectIDToUidMap:(id)arg3 ;
-(id)init;
-(id)transformMailboxUid:(id)arg0 uidToMailboxMap:(id)arg1 objectIDToUidMap:(id)arg2 ;


@end


#endif