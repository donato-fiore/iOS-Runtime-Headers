// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACETAPSERVICEDELEGATE_H
#define DTKTRACETAPSERVICEDELEGATE_H

@protocol DTTapServiceDelegate;

#import <Foundation/Foundation.h>

#import "DTTapServiceMessageSender.h"

@interface DTKTraceTapServiceDelegate : NSObject <DTTapServiceDelegate>

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