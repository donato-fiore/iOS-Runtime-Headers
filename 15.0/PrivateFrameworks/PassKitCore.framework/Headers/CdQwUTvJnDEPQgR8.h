// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDQWUTVJNDEPQGR8_H
#define CDQWUTVJNDEPQGR8_H

@class NSMutableDictionary, NSString, NSError, NSData;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "jprL7AuZZkLkFoBK.h"

@interface CdQwUTvJnDEPQgR8 : NSObject {
    BOOL _callbackDone;
    BOOL _prepared;
    NSMutableDictionary *_identifier2UUID;
    NSObject<OS_os_log> *_logger;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue; // ivar: _callback_queue
@property (retain, nonatomic) jprL7AuZZkLkFoBK *context; // ivar: _context
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSString *lastScoreIdentifier; // ivar: _lastScoreIdentifier
@property (retain, nonatomic) NSError *prepareError; // ivar: _prepareError
@property (retain, nonatomic) NSData *preparedBlob; // ivar: _preparedBlob
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *score_id_queue; // ivar: _score_id_queue


+(id)scorerWithContext:(id)arg0 ;
-(id)VkBISyFszEu5z9lr:(id)arg0 error:(*id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)settingsFromContext:(id)arg0 ;
-(void)_safeCallbackWithMessage:(id)arg0 uuid:(id)arg1 error:(id)arg2 ;
-(void)prepareScoreMessage;
-(void)scoreWithScoreRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;


@end


#endif