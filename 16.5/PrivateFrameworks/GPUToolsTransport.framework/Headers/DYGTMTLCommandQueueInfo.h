// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYGTMTLCOMMANDQUEUEINFO_H
#define DYGTMTLCOMMANDQUEUEINFO_H

@class CaptureMTLCommandQueue, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DYGTMTLCommandQueueInfo : NSObject <NSSecureCoding>



@property (nonatomic) BOOL canBeCaptured; // ivar: _canBeCaptured
@property (nonatomic) CaptureMTLCommandQueue *captureCommandQueue; // ivar: _captureCommandQueue
@property (nonatomic) NSUInteger deviceAddress; // ivar: _deviceAddress
@property (nonatomic) BOOL isInternalQueue; // ivar: _isInternalQueue
@property (nonatomic) BOOL isOpenGLQueue; // ivar: _isOpenGLQueue
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger queueAddress; // ivar: _queueAddress
@property (nonatomic) NSUInteger streamRef; // ivar: _streamRef
@property (nonatomic) NSUInteger toolsDeviceAddress; // ivar: _toolsDeviceAddress
@property (nonatomic) NSUInteger toolsQueueAddress; // ivar: _toolsQueueAddress


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif