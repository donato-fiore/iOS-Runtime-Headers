// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSAFARIVIEWCONTROLLERCONFIGURATION_H
#define SFSAFARIVIEWCONTROLLERCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SFSafariViewControllerActivityButton.h"

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _ephemeral;
    BOOL _performingAccountSecurityUpgrade;
}


@property (nonatomic) NSInteger _redirectNotificationBehavior; // ivar: _redirectNotificationBehavior
@property (copy, nonatomic) SFSafariViewControllerActivityButton *activityButton; // ivar: _activityButton
@property (nonatomic) BOOL barCollapsingEnabled; // ivar: _barCollapsingEnabled
@property (nonatomic) BOOL entersReaderIfAvailable; // ivar: _entersReaderIfAvailable


+(BOOL)supportsSecureCoding;
-(BOOL)_isEphemeral;
-(BOOL)_isPerformingAccountSecurityUpgrade;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_setEphemeral:(BOOL)arg0 ;
-(void)_setPerformingAccountSecurityUpgrade:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif