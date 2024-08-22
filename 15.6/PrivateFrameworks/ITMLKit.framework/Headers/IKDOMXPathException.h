// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDOMXPATHEXCEPTION_H
#define IKDOMXPATHEXCEPTION_H

@protocol IKJSDOMXPathException;


#import "IKJSObject.h"

@interface IKDOMXPathException : IKJSObject <IKJSDOMXPathException>



@property (nonatomic) NSInteger code; // ivar: code


+(id)exceptionWithAppContext:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif