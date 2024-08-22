// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MEDIACONTROLSNOOPBUTTONEVENTCONSUMER_H
#define _MEDIACONTROLSNOOPBUTTONEVENTCONSUMER_H

@class NSString;
@protocol SBSHardwareButtonEventConsuming;

#import <Foundation/Foundation.h>


@interface _MediaControlsNoopButtonEventConsumer : NSObject <SBSHardwareButtonEventConsuming>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)consumeAnyPressEventForButtonKind:(NSInteger)arg0 ;


@end


#endif