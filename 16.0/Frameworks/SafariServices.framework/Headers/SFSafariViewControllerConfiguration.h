// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSAFARIVIEWCONTROLLERCONFIGURATION_H
#define SFSAFARIVIEWCONTROLLERCONFIGURATION_H

@class UIEventAttribution;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFSafariViewControllerActivityButton.h"

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=_isEphemeral, setter=_setEphemeral:) BOOL _ephemeral; // ivar: _ephemeral
@property (nonatomic, getter=_isJITEnabled, setter=_setJITEnabled:) BOOL _jitEnabled; // ivar: _jitEnabled
@property (nonatomic, getter=_isPerformingAccountSecurityUpgrade, setter=_setPerformingAccountSecurityUpgrade:) BOOL _performingAccountSecurityUpgrade; // ivar: _performingAccountSecurityUpgrade
@property (nonatomic) NSInteger _redirectNotificationBehavior; // ivar: _redirectNotificationBehavior
@property (copy, nonatomic) SFSafariViewControllerActivityButton *activityButton; // ivar: _activityButton
@property (nonatomic) BOOL barCollapsingEnabled; // ivar: _barCollapsingEnabled
@property (nonatomic) BOOL entersReaderIfAvailable; // ivar: _entersReaderIfAvailable
@property (copy, nonatomic) UIEventAttribution *eventAttribution; // ivar: _eventAttribution


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif