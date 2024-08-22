// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDPLAINTEXTTAPBACKINTERPRETER_H
#define IMDPLAINTEXTTAPBACKINTERPRETER_H


#import <Foundation/Foundation.h>

#import "__IMDPlainTextTapbackInterpreterImpl.h"

@interface IMDPlainTextTapbackInterpreter : NSObject

@property (retain, nonatomic) __IMDPlainTextTapbackInterpreterImpl *impl; // ivar: _impl


-(id)init;
-(id)interpretMessageItem:(id)arg0 inChat:(id)arg1 ;


@end


#endif