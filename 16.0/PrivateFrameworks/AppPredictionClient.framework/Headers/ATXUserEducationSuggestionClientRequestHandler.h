// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONCLIENTREQUESTHANDLER_H
#define ATXUSEREDUCATIONSUGGESTIONCLIENTREQUESTHANDLER_H

@protocol ATXUserEducationSuggestionClientXPCInterface;

#import <Foundation/Foundation.h>

#import "ATXUserEducationSuggestionClient.h"

@interface ATXUserEducationSuggestionClientRequestHandler : NSObject <ATXUserEducationSuggestionClientXPCInterface>

 {
    ATXUserEducationSuggestionClient *_client;
}




-(id)init;
-(id)initWithClient:(id)arg0 ;
-(void)didReceiveUserEducationSuggestionEvent:(id)arg0 ;


@end


#endif