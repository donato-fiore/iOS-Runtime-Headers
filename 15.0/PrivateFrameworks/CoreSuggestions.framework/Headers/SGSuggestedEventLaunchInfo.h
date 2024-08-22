// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGSUGGESTEDEVENTLAUNCHINFO_H
#define SGSUGGESTEDEVENTLAUNCHINFO_H

@class NSString, INIntent, NSURL, NSUserActivity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGSuggestedEventLaunchInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (readonly, nonatomic) NSString *localizedShowInString; // ivar: _localizedShowInString
@property (readonly, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) NSString *userActivityString; // ivar: _userActivityString


+(BOOL)supportsSecureCoding;
-(id)initWithBundleId:(id)arg0 localizedShowInString:(id)arg1 userActivity:(id)arg2 intent:(id)arg3 sourceURL:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif