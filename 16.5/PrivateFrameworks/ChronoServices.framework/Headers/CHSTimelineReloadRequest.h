// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSTIMELINERELOADREQUEST_H
#define CHSTIMELINERELOADREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHSTimelineReloadRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL allowCostOverride; // ivar: _allowCostOverride
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier; // ivar: _extensionBundleIdentifier
@property (readonly, copy, nonatomic) NSString *kind; // ivar: _kind
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(id)arg0 extensionBundleIdentifier:(id)arg1 reason:(id)arg2 allowCostOverride:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif