// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADISPLAYFLIPBOOK_H
#define CADISPLAYFLIPBOOK_H


#import <Foundation/Foundation.h>

#import "CAContext.h"

@interface CADisplayFlipBook : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) NSUInteger capacity;
@property (retain, nonatomic) CAContext *context;


+(id)new;
-(BOOL)renderForTime:(CGFloat)arg0 options:(id)arg1 error:(*id)arg2 ;
-(CGFloat)cancelAtTime:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)purge;
-(void)setPurgeable;


@end


#endif