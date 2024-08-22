// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21SIRIINFORMATIONSEARCH39MOCKEMITTABLESIRIANALYTICSMESSAGESTREAM_H
#define _TTC21SIRIINFORMATIONSEARCH39MOCKEMITTABLESIRIANALYTICSMESSAGESTREAM_H

@protocol SiriAnalyticsMessageStream;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch39MockEmittableSiriAnalyticsMessageStream : NSObject <SiriAnalyticsMessageStream>

 {
    ? emittedMessages;
}




-(id)init;
-(void)barrierWithCompletion:(id)arg0 ;
-(void)emitMessage:(id)arg0 ;
-(void)emitMessage:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)enqueueLargeMessageObjectFromPath:(id)arg0 assetIdentifier:(id)arg1 messageMetadata:(id)arg2 completion:(id)arg3 ;
-(void)resolvePartialMessage:(id)arg0 ;
-(void)resolvePartialMessage:(id)arg0 timestamp:(NSUInteger)arg1 ;


@end


#endif