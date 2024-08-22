// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNFETCHACTIONFORAUTOSHORTCUTPHRASEOPERATION_H
#define LNFETCHACTIONFORAUTOSHORTCUTPHRASEOPERATION_H

@class NSString, LNAction;


#import "LNConnectionOperation.h"

@interface LNFetchActionForAutoShortcutPhraseOperation : LNConnectionOperation

@property (copy, nonatomic) NSString *autoShortcutPhrase; // ivar: _autoShortcutPhrase
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) LNAction *result; // ivar: _result


-(id)initWithConnectionInterface:(id)arg0 autoShortcutPhrase:(id)arg1 completionHandler:(id)arg2 ;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif