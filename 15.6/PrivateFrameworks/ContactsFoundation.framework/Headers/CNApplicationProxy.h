// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAPPLICATIONPROXY_H
#define CNAPPLICATIONPROXY_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNApplicationProxy : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *activityTypes; // ivar: _activityTypes
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 teamIdentifier:(id)arg1 localizedName:(id)arg2 activityTypes:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLSApplicationProxy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif