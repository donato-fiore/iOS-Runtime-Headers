// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFUSERPROMPTOPERATION_H
#define WFUSERPROMPTOPERATION_H

@class NSDictionary;


#import "WFOperation.h"

@interface WFUserPromptOperation : WFOperation

@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (nonatomic) NSInteger result; // ivar: _result
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (readonly, nonatomic) NSDictionary *userResponse; // ivar: _userResponse


+(id)sharedMapTable;
-(id)initWithOptions:(id)arg0 timeout:(CGFloat)arg1 ;
-(id)initWithOptions:(id)arg0 timeout:(CGFloat)arg1 flags:(NSUInteger)arg2 ;
-(void)_notification:(struct __CFUserNotification *)arg0 didFinishWithResponse:(NSUInteger)arg1 ;
-(void)_showPrompt;
-(void)start;


@end


#endif