// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICPEERINPUTSTREAM_H
#define ICPEERINPUTSTREAM_H

@class NSMutableData, NSString, NSInputStream;
@protocol NSStreamDelegate, ICPeerInputStreamDelegate;

#import <Foundation/Foundation.h>


@interface ICPeerInputStream : NSObject <NSStreamDelegate>



@property (retain, nonatomic) NSMutableData *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICPeerInputStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (nonatomic) BOOL isMessage; // ivar: _isMessage
@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (readonly) Class superclass;


-(id)initWithInputStream:(id)arg0 ;
-(void)dealloc;
-(void)readDataFrom:(id)arg0 ;
-(void)startReadLength;
-(void)startReadMessage:(NSUInteger)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;


@end


#endif