// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBTIMEPROVIDER_H
#define RBTIMEPROVIDER_H

@class NSString;
@protocol RBTimeProviding;

#import <Foundation/Foundation.h>


@interface RBTimeProvider : NSObject <RBTimeProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(CGFloat)currentTime;
-(CGFloat)startTimeForProcess:(id)arg0 ;
-(id)executeWithCancellingAfter:(CGFloat)arg0 onQueue:(id)arg1 block:(id)arg2 ;
-(void)executeAfter:(CGFloat)arg0 onQueue:(id)arg1 block:(id)arg2 ;


@end


#endif