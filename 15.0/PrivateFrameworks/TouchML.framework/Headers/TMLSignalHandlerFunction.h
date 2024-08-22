// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLSIGNALHANDLERFUNCTION_H
#define TMLSIGNALHANDLERFUNCTION_H

@class NSString;
@protocol TMLModelSerialize;


#import "TMLFunction.h"

@interface TMLSignalHandlerFunction : TMLFunction <TMLModelSerialize>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *signalName; // ivar: _signalName
@property (readonly) Class superclass;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(id)initWithSignalName:(id)arg0 functionName:(id)arg1 body:(id)arg2 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif