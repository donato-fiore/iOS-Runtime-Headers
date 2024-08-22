// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDAMESSAGECONTENTCONSUMER_H
#define MFDAMESSAGECONTENTCONSUMER_H

@class NSMutableData, NSString, DAMailMessage;
@protocol MFDAStreamingContentConsumer, MFCollectingDataConsumer, MFMessageDataConsumerFactory;

#import <Foundation/Foundation.h>


@interface MFDAMessageContentConsumer : NSObject <MFDAStreamingContentConsumer>

 {
    BOOL _triedCreatingAlternatePartConsumer;
    BOOL _didBeginStreaming;
    BOOL _succeeded;
}


@property (retain, nonatomic) NSObject<MFCollectingDataConsumer> *alternatePartConsumer; // ivar: _alternatePartConsumer
@property (readonly, nonatomic) NSMutableData *bodyData; // ivar: _bodyData
@property (retain, nonatomic) NSObject<MFMessageDataConsumerFactory> *consumerFactory; // ivar: _consumerFactory
@property (retain, nonatomic) NSObject<MFCollectingDataConsumer> *dataConsumer; // ivar: _dataConsumer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DAMailMessage *message; // ivar: _message
@property (nonatomic) int requestedFormat; // ivar: _requestedFormat
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeOfLastActivity; // ivar: _timeOfLastActivity


-(BOOL)didBeginStreaming;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg0 format:(int)arg1 ;
-(BOOL)succeeded;
-(id)data;
-(id)dataConsumerForPart:(id)arg0 ;
-(void)consumeData:(char *)arg0 length:(int)arg1 format:(int)arg2 mailMessage:(id)arg3 ;
-(void)didEndStreamingForMailMessage:(id)arg0 ;


@end


#endif