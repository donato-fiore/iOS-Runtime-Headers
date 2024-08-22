// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLREQUESTMULTIPARTINPUTSTREAM_H
#define SLREQUESTMULTIPARTINPUTSTREAM_H

@class NSInputStream, NSData;


#import "SLRequestMultiPart.h"

@interface SLRequestMultiPartInputStream : NSInputStream {
    SLRequestMultiPart *_multiPart;
    NSUInteger _streamStatus;
    NSUInteger _bytesReadInState;
    NSUInteger _totalBytesRead;
    NSData *_srcData;
    int _currentState;
}




-(BOOL)getBuffer:(*char *)arg0 length:(*NSUInteger)arg1 ;
-(BOOL)hasBytesAvailable;
-(NSInteger)currentStateRead:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSInteger)read:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSUInteger)length;
-(NSUInteger)readStateSourceData:(id)arg0 toBuffer:(char *)arg1 offset:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 ;
-(id)initWithMultiPart:(id)arg0 ;
-(void)close;
-(void)open;
-(void)transitionState;


@end


#endif