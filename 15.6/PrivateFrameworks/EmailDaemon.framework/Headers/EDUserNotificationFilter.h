// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDUSERNOTIFICATIONFILTER_H
#define EDUSERNOTIFICATIONFILTER_H

@protocol EMBlockedSenderReader, EMVIPReader;

#import <Foundation/Foundation.h>


@interface EDUserNotificationFilter : NSObject

@property (readonly, nonatomic) NSObject<EMBlockedSenderReader> *blockedSenderReader; // ivar: _blockedSenderReader
@property (readonly, nonatomic) NSObject<EMVIPReader> *vipReader; // ivar: _vipReader


-(BOOL)_messageNeedsNotification:(id)arg0 ;
-(id)initWithBlockedSenderReader:(id)arg0 vipReader:(id)arg1 ;
-(id)messagesNeedingNotification:(id)arg0 ;


@end


#endif