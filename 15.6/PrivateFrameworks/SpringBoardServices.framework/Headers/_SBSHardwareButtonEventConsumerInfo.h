// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SBSHARDWAREBUTTONEVENTCONSUMERINFO_H
#define _SBSHARDWAREBUTTONEVENTCONSUMERINFO_H

@class NSString;
@protocol BSInvalidatable, SBSHardwareButtonEventConsuming;

#import <Foundation/Foundation.h>

#import "SBSHardwareButtonService.h"

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable>



@property (nonatomic) NSInteger buttonKind; // ivar: _buttonKind
@property (retain, nonatomic) NSObject<SBSHardwareButtonEventConsuming> *consumer; // ivar: _consumer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger eventMask; // ivar: _eventMask
@property (nonatomic) NSInteger eventPriority; // ivar: _eventPriority
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SBSHardwareButtonService *service; // ivar: _service
@property (readonly) Class superclass;
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)infoWithConsumer:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif