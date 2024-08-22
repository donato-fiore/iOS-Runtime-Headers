// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTSYSMONTAPSERVICEDELEGATE_H
#define DTSYSMONTAPSERVICEDELEGATE_H

@protocol DTTapServiceDelegate;

#import <Foundation/Foundation.h>

#import "DTTapServiceMessageSender.h"

@interface DTSysmonTapServiceDelegate : NSObject <DTTapServiceDelegate>

 {
    DTTapServiceMessageSender *_messageSender;
}




+(void)registerCapabilities:(id)arg0 ;
-(BOOL)requiresExpiredPIDCacheForConfig:(id)arg0 ;
-(id)createConfigWithPlist:(id)arg0 ;
-(id)initWithMessageSender:(id)arg0 ;
-(id)willStartWithConfig:(id)arg0 ;
-(void)didStop;


@end


#endif