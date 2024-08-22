// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKSESSIONACTION_H
#define STKSESSIONACTION_H

@class BSAction;
@protocol BSXPCCoding;

#import <Foundation/Foundation.h>

#import "STKSessionBehavior.h"

@interface STKSessionAction : NSObject {
    STKSessionBehavior *_behavior;
    id<BSXPCCoding> *_data;
    BOOL _invalidated;
}


@property (readonly, nonatomic) BSAction *_BSAction; // ivar: _action
@property (readonly, nonatomic) STKSessionBehavior *behavior;
@property (readonly, nonatomic) NSObject<BSXPCCoding> *sessionData;


+(id)_sessionActionFromBSAction:(id)arg0 ;
-(id)_init;
-(id)_initWithBSAction:(id)arg0 ;
-(id)initWithBehavior:(id)arg0 data:(id)arg1 responseBlock:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendResponse:(NSInteger)arg0 ;
-(void)sendResponse:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif