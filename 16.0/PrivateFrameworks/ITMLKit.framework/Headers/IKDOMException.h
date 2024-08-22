// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDOMEXCEPTION_H
#define IKDOMEXCEPTION_H

@protocol IKJSDOMException;


#import "IKJSObject.h"

@interface IKDOMException : IKJSObject <IKJSDOMException>



@property (nonatomic) NSInteger code; // ivar: code


+(id)exceptionWithAppContext:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif