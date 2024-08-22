// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSDEBUGGERSTRINGOUTPUT_H
#define _UIFOCUSDEBUGGERSTRINGOUTPUT_H

@class NSString;
@protocol UIFocusDebuggerOutput;

#import <Foundation/Foundation.h>


@interface _UIFocusDebuggerStringOutput : NSObject <UIFocusDebuggerOutput>

 {
    NSString *_outputString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)outputWithString:(id)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;


@end


#endif