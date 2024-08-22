// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBSAVERESPONSE_H
#define PBSAVERESPONSE_H

@class UISPasteSharingToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PBSaveResponse : NSObject <NSSecureCoding>



@property (readonly) NSInteger changeCount; // ivar: _changeCount
@property (readonly) NSUInteger notificationState; // ivar: _notificationState
@property (readonly) UISPasteSharingToken *sharingToken; // ivar: _sharingToken


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNotificationState:(NSUInteger)arg0 changeCount:(NSInteger)arg1 sharingToken:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif