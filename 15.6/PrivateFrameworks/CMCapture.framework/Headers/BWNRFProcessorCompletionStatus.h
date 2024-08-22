// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNRFPROCESSORCOMPLETIONSTATUS_H
#define BWNRFPROCESSORCOMPLETIONSTATUS_H

@class NRFCompletionStatus;

#import <Foundation/Foundation.h>


@interface BWNRFProcessorCompletionStatus : NSObject {
    NRFCompletionStatus *_completionStatus;
}




-(BOOL)waitForCompletion;
-(BOOL)waitForCompletionWithDescriptionOut:(*id)arg0 ;
-(id)description;
-(id)initWithCompletionStatus:(id)arg0 ;
-(void)dealloc;


@end


#endif