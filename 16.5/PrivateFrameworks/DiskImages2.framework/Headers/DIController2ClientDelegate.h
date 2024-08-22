// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DICONTROLLER2CLIENTDELEGATE_H
#define DICONTROLLER2CLIENTDELEGATE_H

@protocol DIController2ClientProtocol;

#import <Foundation/Foundation.h>

#import "DIDeviceHandle.h"

@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol>



@property (retain, nonatomic) DIDeviceHandle *deviceHandle; // ivar: _deviceHandle


-(void)attachCompletedWithHandle:(id)arg0 reply:(id)arg1 ;


@end


#endif