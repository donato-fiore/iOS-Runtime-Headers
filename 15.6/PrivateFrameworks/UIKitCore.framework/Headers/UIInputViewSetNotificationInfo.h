// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTVIEWSETNOTIFICATIONINFO_H
#define UIINPUTVIEWSETNOTIFICATIONINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface UIInputViewSetNotificationInfo : NSObject

@property (nonatomic) CGRect assistantFrame; // ivar: _assistantFrame
@property (nonatomic) BOOL assistantOnScreenOnly; // ivar: _assistantOnScreenOnly
@property (nonatomic) NSUInteger assistantPosition; // ivar: _assistantPosition
@property (nonatomic) CGPoint beginCenter; // ivar: _beginCenter
@property (nonatomic) CGRect beginFrame; // ivar: _beginFrame
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL changedAccessoryOnly; // ivar: _changedAccessoryOnly
@property (nonatomic) BOOL dueToRotation; // ivar: _dueToRotation
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGPoint endCenter; // ivar: _endCenter
@property (nonatomic) CGRect endFrame; // ivar: _endFrame
@property (nonatomic) BOOL forceNotification; // ivar: _forceNotification
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSDictionary *privateUserInfo;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL wasCausedRemotely; // ivar: _wasCausedRemotely


+(id)info;
-(BOOL)containsChange;
-(id)init;
-(id)inverseInfo;
-(id)rotationUserInfo;
-(void)logGeometry;
-(void)populateEndInfoWithFrame:(struct CGRect )arg0 ;
-(void)populateStartInfoWithFrame:(struct CGRect )arg0 ;
-(void)populateWithAnimationStyle:(id)arg0 ;


@end


#endif