// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSTANDALONESHORTCUTREPRESENTATION_H
#define WFSTANDALONESHORTCUTREPRESENTATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFStandaloneShortcutRepresentation : NSObject

@property (readonly, copy, nonatomic) NSString *activityBundleIdentifier; // ivar: _activityBundleIdentifier
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, copy, nonatomic) NSString *launchIdForCurrentPlatform; // ivar: _launchIdForCurrentPlatform
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithINShortcut:(id)arg0 ;
-(id)initWithTitle:(id)arg0 associatedAppBundleIdentifier:(id)arg1 launchIdForCurrentPlatform:(id)arg2 activityBundleIdentifier:(id)arg3 ;


@end


#endif