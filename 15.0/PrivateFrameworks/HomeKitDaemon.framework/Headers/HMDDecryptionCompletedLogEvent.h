// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDDECRYPTIONCOMPLETEDLOGEVENT_H
#define HMDDECRYPTIONCOMPLETEDLOGEVENT_H

@class HMMLogEvent;



@interface HMDDecryptionCompletedLogEvent : HMMLogEvent

@property (readonly) BOOL didDecryptionFail; // ivar: _didDecryptionFail


+(id)decryptionCompletedWithFailure:(BOOL)arg0 ;
-(id)initWithFailure:(BOOL)arg0 ;


@end


#endif