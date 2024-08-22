// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUREADCHANNELNSINPUTSTREAMADAPTOR_H
#define SFUREADCHANNELNSINPUTSTREAMADAPTOR_H

@class NSInputStream, NSError, NSString;
@protocol NSStreamDelegate, SFUInputStream;



@interface SFUReadChannelNSInputStreamAdaptor : NSInputStream <NSStreamDelegate>

 {
    id<SFUInputStream> *_inputStream;
    id<NSStreamDelegate> *_delegate;
    uint8_t _status;
    NSError *_streamError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)streamStatus;
-(id)delegate;
-(id)initWithSFUInputStream:(id)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(id)streamError;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif