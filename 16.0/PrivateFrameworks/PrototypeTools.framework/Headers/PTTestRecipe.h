// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTESTRECIPE_H
#define PTTESTRECIPE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "PTTestRecipeInfo.h"

@interface PTTestRecipe : NSObject

@property (copy, nonatomic) id *cleanupBlock; // ivar: _cleanupBlock
@property (retain, nonatomic) PTTestRecipeInfo *info; // ivar: _info
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *prepareBlock; // ivar: _prepareBlock
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(BOOL)_wantsEvent:(NSInteger)arg0 ;
// -(id)_initWithTitle:(id)arg0 prepareBlock:(id)arg1 cleanupBlock:(unk)arg2  ;
-(void)_activate;
-(void)_deactivate;
-(void)_handleEvent:(NSInteger)arg0 ;
-(void)invalidate;


@end


#endif