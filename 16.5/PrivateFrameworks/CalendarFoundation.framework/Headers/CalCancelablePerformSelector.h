// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCANCELABLEPERFORMSELECTOR_H
#define CALCANCELABLEPERFORMSELECTOR_H

@class NSRunLoop;
@protocol CalCancelable;

#import <Foundation/Foundation.h>


@interface CalCancelablePerformSelector : NSObject <CalCancelable>



@property (copy, nonatomic) id *block; // ivar: _block
@property (retain, nonatomic) NSRunLoop *runloop; // ivar: _runloop


-(id)initWithBlock:(id)arg0 ;
-(void)_performBlock:(id)arg0 ;
-(void)cancel;
-(void)performAfterDelay:(CGFloat)arg0 ;


@end


#endif