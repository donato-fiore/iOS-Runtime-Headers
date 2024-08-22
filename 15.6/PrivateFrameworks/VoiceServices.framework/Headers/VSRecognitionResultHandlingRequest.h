// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRECOGNITIONRESULTHANDLINGREQUEST_H
#define VSRECOGNITIONRESULTHANDLINGREQUEST_H

@class NSArray;
@protocol VSRecognitionResultHandler;

#import <Foundation/Foundation.h>

#import "VSRecognitionAction.h"

@interface VSRecognitionResultHandlingRequest : NSObject {
    id<VSRecognitionResultHandler> *_handler;
    NSArray *_results;
    VSRecognitionAction *_action;
}




-(id)handler;
-(id)initWithHandler:(id)arg0 results:(id)arg1 ;
-(id)nextAction;
-(id)results;
-(void)dealloc;
-(void)setNextAction:(id)arg0 ;


@end


#endif