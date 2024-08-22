// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICUSERNOTIFICATIONBUILDER_H
#define ICUSERNOTIFICATIONBUILDER_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICUserNotificationBuilder : NSObject <NSCopying>

 {
    NSMutableDictionary *_userNotificationDictionary;
}


@property (nonatomic) NSInteger alertLevel; // ivar: _alertLevel
@property (nonatomic) BOOL allowInCar;
@property (copy, nonatomic) NSString *alternateButtonTitle;
@property (copy, nonatomic) NSString *defaultButtonTitle;
@property (nonatomic) BOOL displaysActionButtonOnLockScreen;
@property (nonatomic) BOOL displaysAsTopMost;
@property (nonatomic) BOOL forcesModalAppearance;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *otherButtonTitle;
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (copy, nonatomic) NSString *title;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStoreDialog:(id)arg0 ;
-(struct __CFUserNotification *)createCFUserNotification;
-(void)_setBoolValue:(BOOL)arg0 forKey:(struct __CFString *)arg1 ;


@end


#endif