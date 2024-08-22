// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFDAMESSAGEBODYFETCHCONSUMER_H
#define _MFDAMESSAGEBODYFETCHCONSUMER_H

@class NSData, NSString;
@protocol MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory, MFDAStreamingContentConsumer;

#import <Foundation/Foundation.h>

#import "MFError.h"

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFError *error; // ivar: _error
@property (nonatomic) BOOL hasLocalCopyOfData; // ivar: _hasLocalCopyOfData
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<MFDAStreamingContentConsumer> *streamConsumer; // ivar: _streamConsumer
@property (readonly, nonatomic) BOOL succeeded; // ivar: _succeeded
@property (readonly) Class superclass;


-(BOOL)wantsData;
-(id)streamingContentConsumer;
-(void)handleResponse:(id)arg0 error:(id)arg1 ;


@end


#endif