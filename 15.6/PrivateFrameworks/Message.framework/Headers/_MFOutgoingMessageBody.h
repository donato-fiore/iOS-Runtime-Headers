// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFOUTGOINGMESSAGEBODY_H
#define _MFOUTGOINGMESSAGEBODY_H

@class MFMessageBody, MFBufferedDataConsumer, NSData, NSString;
@protocol MFCollectingDataConsumer;



@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>

 {
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    NSUInteger _count;
    BOOL _lastNewLine;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isLastCharacterNewLine;
-(NSInteger)appendData:(id)arg0 ;
-(NSUInteger)count;
-(id)data;
-(id)init;
-(id)rawData;
-(void)done;


@end


#endif