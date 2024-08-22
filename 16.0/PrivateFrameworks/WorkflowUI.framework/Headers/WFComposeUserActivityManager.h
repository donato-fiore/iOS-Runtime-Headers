// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOMPOSEUSERACTIVITYMANAGER_H
#define WFCOMPOSEUSERACTIVITYMANAGER_H

@class UIResponder, NSDictionary, WFWorkflow;

#import <Foundation/Foundation.h>


@interface WFComposeUserActivityManager : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (weak, nonatomic) UIResponder *responder; // ivar: _responder
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(id)initWithWorkflow:(id)arg0 targetResponder:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateUserActivityState:(id)arg0 ;


@end


#endif