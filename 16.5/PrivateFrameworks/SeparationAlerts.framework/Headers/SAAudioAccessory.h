// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAUDIOACCESSORY_H
#define SAAUDIOACCESSORY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SAAudioAccessory : NSObject

@property (nonatomic) *BTAccessoryManagerImpl fBTAccessoryManager; // ivar: _fBTAccessoryManager
@property (retain, nonatomic) NSString *fBTAddress; // ivar: _fBTAddress
@property (nonatomic) *BTDeviceImpl fBTDevice; // ivar: _fBTDevice
@property (nonatomic) *BTSessionImpl fBTSession; // ivar: _fBTSession
@property (nonatomic) int fBTSessionAttachRetryCount; // ivar: _fBTSessionAttachRetryCount
@property (nonatomic) unsigned int fProductID; // ivar: _fProductID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(NSInteger)convertToSAInEarStatus:(int)arg0 ;
-(NSInteger)getPrimaryBudSide;
-(id)initWithQueue:(id)arg0 ;
-(void)attachBTSession;
-(void)btSessionEventHandler:(struct BTSessionImpl *)arg0 event:(int)arg1 result:(int)arg2 ;
-(void)getInEarStatus:(*NSInteger)arg0 secondary:(*NSInteger)arg1 ;
-(void)refreshBTDevice;
-(void)reset;
-(void)setBTAddress:(id)arg0 ;


@end


#endif