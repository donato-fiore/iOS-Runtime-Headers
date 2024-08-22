// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSLEEPACTION_H
#define VCSLEEPACTION_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface VCSleepAction : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *bundleIdentifierForDisplay; // ivar: _bundleIdentifierForDisplay
@property (readonly, nonatomic, getter=isGoodForSleep) BOOL goodForSleep; // ivar: _goodForSleep
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *serializedParameters; // ivar: _serializedParameters
@property (readonly, nonatomic) NSUInteger shortcutAvailability; // ivar: _shortcutAvailability
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier; // ivar: _sourceAppBundleIdentifier
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *workflowActionIdentifier; // ivar: _workflowActionIdentifier


+(BOOL)supportsSecureCoding;
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg0 ;
+(id)identifierForWorkflowActionIdentifier:(id)arg0 serializedParameters:(id)arg1 ;
+(id)openAppActionWithBundleIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 workflowActionIdentifier:(id)arg1 sourceAppBundleIdentifier:(id)arg2 bundleIdentifierForDisplay:(id)arg3 title:(id)arg4 subtitle:(id)arg5 serializedParameters:(id)arg6 shortcutAvailability:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif