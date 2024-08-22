// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENTEXTMESSAGEMANAGER_H
#define ENTEXTMESSAGEMANAGER_H

@class NSMutableDictionary;
@protocol ENTextMessageManagerDelegate;

#import <Foundation/Foundation.h>

#import "ENSecureArchiveFileWrapper.h"

@interface ENTextMessageManager : NSObject

@property (weak, nonatomic) NSObject<ENTextMessageManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *textMessageHashes; // ivar: _textMessageHashes
@property (retain, nonatomic) ENSecureArchiveFileWrapper *textMessageHistoryFileWrapper; // ivar: _textMessageHistoryFileWrapper


-(BOOL)_readIfNecessaryWithError:(*id)arg0 ;
-(BOOL)_verifyTextMessage:(id)arg0 phoneNumber:(id)arg1 verificationDate:(id)arg2 publicKey:(id)arg3 publicKeyVersion:(id)arg4 reportType:(id)arg5 outError:(*id)arg6 ;
-(BOOL)verifyTextMessage:(id)arg0 phoneNumber:(id)arg1 verificationDate:(id)arg2 publicKey:(id)arg3 publicKeyVersion:(id)arg4 userReport:(*BOOL)arg5 outError:(*id)arg6 ;
-(id)initWithDirectoryURL:(id)arg0 ;
-(void)_purgeOldHashes;
-(void)activateIfNeeded;
-(void)invalidate;
-(void)purgeAllHashes;
-(void)purgeOldHashes;


@end


#endif