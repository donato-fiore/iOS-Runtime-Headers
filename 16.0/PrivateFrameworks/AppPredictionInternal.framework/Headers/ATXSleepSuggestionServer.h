// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSLEEPSUGGESTIONSERVER_H
#define ATXSLEEPSUGGESTIONSERVER_H

@class NSString, NSXPCListener, BMInferredModeStream;
@protocol NSXPCListenerDelegate, ATXSleepSuggestionInterface;

#import <Foundation/Foundation.h>


@interface ATXSleepSuggestionServer : NSObject <NSXPCListenerDelegate, ATXSleepSuggestionInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener
@property (retain, nonatomic) BMInferredModeStream *stream; // ivar: _stream
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isSleepScheduleBetweenTheBoundariesWithBedtime:(id)arg0 wakeupTime:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)predictedSleepSuggestionWithCompletionHandler:(id)arg0 ;


@end


#endif