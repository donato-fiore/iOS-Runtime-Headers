// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAANIMATIONDELEGATEBLOCKHELPER_H
#define CAANIMATIONDELEGATEBLOCKHELPER_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface CAAnimationDelegateBlockHelper : NSObject <CAAnimationDelegate>



@property (copy, nonatomic) id *animationDidStartBlock; // ivar: _animationDidStartBlock
@property (copy, nonatomic) id *animationDidStopBlock; // ivar: _animationDidStopBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif