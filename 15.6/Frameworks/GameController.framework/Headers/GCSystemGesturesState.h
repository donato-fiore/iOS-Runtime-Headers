// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCSYSTEMGESTURESSTATE_H
#define GCSYSTEMGESTURESSTATE_H

@class NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GCSystemGesturesState : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSSet *disabledSystemGestureInputNames; // ivar: _disabledSystemGestureInputNames
@property (retain, nonatomic) NSSet *enabledSystemGestureInputNames; // ivar: _enabledSystemGestureInputNames


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabledSystemGestures:(id)arg0 disabledSystemGestures:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif