// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSJSAPPERROR_H
#define VSJSAPPERROR_H

@class NSString;
@protocol VSJSAppError;


#import "VSJSObject.h"

@interface VSJSAppError : VSJSObject <VSJSAppError>



@property (nonatomic) NSUInteger code; // ivar: _code
@property (copy, nonatomic) NSString *message; // ivar: _message




@end


#endif