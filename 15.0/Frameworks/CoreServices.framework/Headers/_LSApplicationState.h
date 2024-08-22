// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSAPPLICATIONSTATE_H
#define _LSAPPLICATIONSTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSApplicationState : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _stateFlags;
    int _ratingRank;
    NSUInteger _installType;
}


@property (readonly, nonatomic, getter=isAlwaysAvailable) BOOL alwaysAvailable;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic, getter=isDowngraded) BOOL downgraded;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isRemovedSystemApp) BOOL removedSystemApp;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 stateFlags:(NSUInteger)arg1 ratingRank:(int)arg2 installType:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addStateFlag:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif