// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDOMLSINPUT_H
#define IKDOMLSINPUT_H

@class NSString;
@protocol IKJSDOMLSInput;


#import "IKJSObject.h"

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput>



@property (retain, nonatomic) id *byteStream; // ivar: _byteStream
@property (nonatomic) BOOL certifiedText; // ivar: _certifiedText
@property (retain, nonatomic) NSString *encoding; // ivar: _encoding
@property (retain, nonatomic) NSString *stringData; // ivar: _stringData




@end


#endif