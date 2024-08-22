// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSNOTIFICATIONBANNERDISPLAYMANAGER_H
#define CLSNOTIFICATIONBANNERDISPLAYMANAGER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface CLSNotificationBannerDisplayManager : NSObject

@property (retain, nonatomic) NSDate *lastBannerTime; // ivar: _lastBannerTime


+(id)shared;
-(void)showBannerWithTitle:(id)arg0 message:(id)arg1 ;
-(void)showPrivacyModalViewWithInfo:(id)arg0 ;


@end


#endif