// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CATREMOTECONNECTIONSENDDATAWITHSTREAMCONTEXT_H
#define _CATREMOTECONNECTIONSENDDATAWITHSTREAMCONTEXT_H

@class NSMutableData, NSData, NSString, NSInputStream;
@protocol _CATRemoteConnectionSendContext;

#import <Foundation/Foundation.h>


@interface _CATRemoteConnectionSendDataWithStreamContext : NSObject <_CATRemoteConnectionSendContext>

 {
    NSMutableData *mBuffer;
    NSData *mHeaderData;
    NSUInteger mBytesRead;
}


@property (readonly, nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) NSUInteger bytesWritten; // ivar: _bytesWritten
@property (readonly, nonatomic) NSUInteger clientBytesWritten;
@property (readonly, nonatomic) NSUInteger dataLength; // ivar: _dataLength
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBytesRemaining;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSInputStream *stream; // ivar: _stream
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *userInfo; // ivar: _userInfo


-(id)bufferedDataWithError:(*id)arg0 ;
-(id)initWithStream:(id)arg0 length:(NSUInteger)arg1 bufferSize:(NSUInteger)arg2 userInfo:(id)arg3 ;
-(void)dealloc;


@end


#endif