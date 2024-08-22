// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONSERVERREQUESTHANDLER_H
#define ATXUSEREDUCATIONSUGGESTIONSERVERREQUESTHANDLER_H

@protocol ATXUserEducationSuggestionServerXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionServerRequestHandler : NSObject <ATXUserEducationSuggestionServerXPCInterface>

 {
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)logUserEducationSuggestionFeedback:(id)arg0 ;


@end


#endif