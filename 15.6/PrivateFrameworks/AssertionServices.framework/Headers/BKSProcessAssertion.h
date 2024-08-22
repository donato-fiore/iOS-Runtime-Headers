// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSPROCESSASSERTION_H
#define BKSPROCESSASSERTION_H

@class RBSAssertion;


#import "BKSAssertion.h"

@interface BKSProcessAssertion : BKSAssertion {
    unsigned int _flags;
    RBSAssertion *_mediaPlaybackHackAssertion;
}


@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned int reason; // ivar: _reason


+(id)NameForReason:(unsigned int)arg0 ;
-(BOOL)acquire;
-(NSUInteger)_legacyFlagsForFlags:(unsigned int)arg0 ;
-(NSUInteger)_legacyReasonForReason:(unsigned int)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 ;
-(id)initWithBundleIdentifier:(id)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 withHandler:(id)arg4 ;
// -(id)initWithBundleIdentifier:(id)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 withHandler:(id)arg4 acquire:(unk)arg5  ;
// -(id)initWithBundleIdentifier:(id)arg0 pid:(int)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 withHandler:(id)arg5 acquire:(unk)arg6  ;
-(id)initWithPID:(int)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 ;
-(id)initWithPID:(int)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 withHandler:(id)arg4 ;
// -(id)initWithPID:(int)arg0 flags:(unsigned int)arg1 reason:(unsigned int)arg2 name:(id)arg3 withHandler:(id)arg4 acquire:(unk)arg5  ;
-(void)assertion:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif