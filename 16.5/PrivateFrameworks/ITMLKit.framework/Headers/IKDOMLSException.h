// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDOMLSEXCEPTION_H
#define IKDOMLSEXCEPTION_H

@protocol IKDOMLSException;


#import "IKJSObject.h"

@interface IKDOMLSException : IKJSObject <IKDOMLSException>



@property (nonatomic) NSInteger code; // ivar: code


+(id)exceptionWithAppContext:(id)arg0 code:(NSInteger)arg1 ;


@end


#endif