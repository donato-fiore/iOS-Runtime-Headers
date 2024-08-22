// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSLEEPSUGGESTIONCLIENT_H
#define ATXSLEEPSUGGESTIONCLIENT_H

@class NSXPCConnection;
@protocol ATXSleepSuggestionInterface;

#import <Foundation/Foundation.h>


@interface ATXSleepSuggestionClient : NSObject <ATXSleepSuggestionInterface>



@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)init;
-(void)predictedSleepSuggestionWithCompletionHandler:(id)arg0 ;


@end


#endif