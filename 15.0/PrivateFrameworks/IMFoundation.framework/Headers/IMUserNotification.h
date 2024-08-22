// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMUSERNOTIFICATION_H
#define IMUSERNOTIFICATION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface IMUserNotification : NSObject {
    id *_reserved;
}


@property (readonly, nonatomic) NSUInteger displayFlags;
@property (readonly, retain, nonatomic) NSDictionary *displayInformation;
@property (readonly, retain, nonatomic) id *identifier;
@property (retain, nonatomic) NSString *representedApplicationBundle;
@property (nonatomic) BOOL requireUserInteraction;
@property (readonly, nonatomic) NSUInteger response;
@property (readonly, nonatomic) NSUInteger responseFlags;
@property (readonly, retain, nonatomic) NSDictionary *responseInformation;
@property (nonatomic) BOOL showInLockScreen;
@property (readonly, nonatomic) CGFloat timeout;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL usesNotificationCenter;


+(id)userNotificationWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 alertLevel:(NSUInteger)arg2 displayFlags:(NSUInteger)arg3 displayInformation:(id)arg4 ;
+(id)userNotificationWithIdentifier:(id)arg0 title:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 otherButton:(id)arg5 ;
-(id)_initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 displayFlags:(NSUInteger)arg2 displayInformation:(id)arg3 ;


@end


#endif