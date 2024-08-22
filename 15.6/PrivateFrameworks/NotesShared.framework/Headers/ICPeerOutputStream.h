// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPEEROUTPUTSTREAM_H
#define ICPEEROUTPUTSTREAM_H

@class NSMutableData, NSString, NSOutputStream;
@protocol NSStreamDelegate;

#import <Foundation/Foundation.h>


@interface ICPeerOutputStream : NSObject <NSStreamDelegate>



@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly) Class superclass;


-(id)initWithOutputStream:(id)arg0 ;
-(void)dealloc;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)writeData;
-(void)writeMessageData:(id)arg0 ;


@end


#endif