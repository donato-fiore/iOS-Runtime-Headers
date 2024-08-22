// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSHPROFILEEXTENSION_H
#define HDSHPROFILEEXTENSION_H

@class NSString, HDProfile;
@protocol HDProfileExtension;

#import <Foundation/Foundation.h>

#import "HDSHAccessibilityAssertionManager.h"
#import "HDSHWidgetSchedulingManager.h"

@interface HDSHProfileExtension : NSObject <HDProfileExtension>



@property (readonly, nonatomic) HDSHAccessibilityAssertionManager *accessibilityAssertionManager; // ivar: _accessibilityAssertionManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSHWidgetSchedulingManager *widgetSchedulingManager; // ivar: _widgetSchedulingManager


-(id)initWithProfile:(id)arg0 ;


@end


#endif