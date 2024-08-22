// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JAVASCRIPTDIALOGSTATE_H
#define JAVASCRIPTDIALOGSTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface JavaScriptDialogState : NSObject

@property (readonly, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *currentInput; // ivar: _currentInput
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithMessage:(id)arg0 type:(NSInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif