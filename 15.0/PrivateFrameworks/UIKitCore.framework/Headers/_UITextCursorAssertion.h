// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTCURSORASSERTION_H
#define _UITEXTCURSORASSERTION_H

@class NSString;
@protocol UITextCursorAssertion;

#import <Foundation/Foundation.h>

#import "UITextCursorAssertionController.h"

@interface _UITextCursorAssertion : NSObject <UITextCursorAssertion>



@property (weak, nonatomic) UITextCursorAssertionController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)_initWithReason:(id)arg0 options:(NSUInteger)arg1 controller:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif