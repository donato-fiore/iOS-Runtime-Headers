// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSREMOTENOTIFICATION_H
#define SSREMOTENOTIFICATION_H

@class NSDictionary, NSString, NSArray, NSDate;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSRemoteNotification : NSObject <SSXPCCoding>

 {
    NSDictionary *_userInfo;
}


@property (readonly, nonatomic) NSInteger actionType;
@property (readonly, nonatomic) NSString *alertBodyString;
@property (readonly, nonatomic) NSString *alertCancelString;
@property (readonly, nonatomic) NSString *alertOKString;
@property (readonly, nonatomic) NSString *alertTitleString;
@property (readonly, nonatomic) NSString *artworkUrl;
@property (readonly, nonatomic) id *badgeValue;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL explicitContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSDictionary *notificationUserInfo;
@property (readonly, nonatomic) NSString *soundFileName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *tapUrl;
@property (readonly, nonatomic) NSInteger version;


-(id)_valueForAPSKey:(id)arg0 ;
-(id)_valueForAlertKey:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithNotificationUserInfo:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif