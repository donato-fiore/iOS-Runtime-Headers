// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAPPLIER_H
#define HUAPPLIER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HUApplier : NSObject {
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
}


@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


+(void)registerStandaloneApplier:(id)arg0 ;
+(void)unregisterStandaloneApplier:(id)arg0 ;
-(BOOL)_hasCompleted;
-(BOOL)cancel;
-(BOOL)complete:(BOOL)arg0 ;
-(BOOL)start;
-(id)init;
-(void)addApplierBlock:(id)arg0 ;
-(void)addCompletionBlock:(id)arg0 ;
-(void)updateProgress:(CGFloat)arg0 ;


@end


#endif