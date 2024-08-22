// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIAPPCACOMMITFUTURE_H
#define _UIAPPCACOMMITFUTURE_H


#import <Foundation/Foundation.h>


@interface _UIAppCACommitFuture : NSObject {
    id *_block;
}


@property (readonly, nonatomic, getter=_isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated; // ivar: _invalidated


+(id)scheduledPostCommitFuture:(id)arg0 ;
+(id)scheduledPreCommitFuture:(id)arg0 ;
-(id)initWithPhase:(NSUInteger)arg0 block:(id)arg1 ;
-(void)_invoke;
-(void)invalidate;


@end


#endif