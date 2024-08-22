// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPVISIBILITYPREFERENCES_H
#define SBAPPVISIBILITYPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBAppVisibilityPreferences : NSObject {
    NSString *_bundleID;
    NSString *_containerPath;
    BOOL _currentlyVisible;
}


@property (readonly, getter=isCurrentlyVisible) BOOL currentlyVisible;
@property (readonly, getter=isDefaultVisible) BOOL defaultVisible; // ivar: _defaultVisible


-(BOOL)update;
-(id)description;
-(id)initWithDefaultVisible:(BOOL)arg0 bundleID:(id)arg1 containerPath:(id)arg2 ;


@end


#endif