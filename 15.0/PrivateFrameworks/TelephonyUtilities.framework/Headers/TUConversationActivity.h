// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATIONACTIVITY_H
#define TUCONVERSATIONACTIVITY_H

@class NSUUID, NSString, NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUConversationActivityContext.h"
#import "TUConversationActivityMetadata.h"
#import "TUHandle.h"

@interface TUConversationActivity : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) TUConversationActivityContext *activityContext;
@property (copy, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (copy, nonatomic) NSData *applicationContext; // ivar: _applicationContext
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic, getter=isEligibleForHandoff) BOOL eligibleForHandoff;
@property (readonly, nonatomic, getter=isEligibleForWebBrowser) BOOL eligibleForWebBrowser;
@property (copy, nonatomic) NSString *fallbackApplicationName; // ivar: _fallbackApplicationName
@property (retain, nonatomic) TUConversationActivityMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) TUHandle *originator; // ivar: _originator
@property (readonly, copy, nonatomic) NSString *representativeBundleIdentifier;
@property (nonatomic, getter=isSupported) BOOL supported; // ivar: _supported
@property (nonatomic, getter=isSystemActivity) BOOL systemActivity; // ivar: _systemActivity
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)lookupApplicationNameForBundleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationActivity:(id)arg0 ;
-(BOOL)isScreenSharingActivity;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 metadata:(id)arg1 applicationContext:(id)arg2 uuid:(id)arg3 activityIdentifier:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg0 metadata:(id)arg1 applicationContext:(id)arg2 uuid:(id)arg3 activityIdentifier:(id)arg4 fallbackApplicationName:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 applicationContext:(id)arg1 uuid:(id)arg2 activityIdentifier:(id)arg3 ;
-(id)localizedApplicationName;
-(id)platformScreenSharingBundleIdentifier;
-(id)representativeDisplayName;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif