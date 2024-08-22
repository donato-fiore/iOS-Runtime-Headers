// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXAUDIOSESSIONASSERTION_H
#define SVXAUDIOSESSIONASSERTION_H

@class AFSafetyBlock, NSString;
@protocol SVXTaskTracking;

#import <Foundation/Foundation.h>


@interface SVXAudioSessionAssertion : NSObject {
    AFSafetyBlock *_relinquishHandler;
}


@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSObject<SVXTaskTracking> *taskTracker; // ivar: _taskTracker


-(id)description;
-(id)initWithReason:(id)arg0 audioSessionID:(unsigned int)arg1 taskTracker:(id)arg2 relinquishHandler:(id)arg3 ;
-(void)dealloc;
-(void)relinquish;


@end


#endif