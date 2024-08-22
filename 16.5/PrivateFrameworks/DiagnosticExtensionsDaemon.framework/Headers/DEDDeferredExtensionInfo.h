// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDDEFERREDEXTENSIONINFO_H
#define DEDDEFERREDEXTENSIONINFO_H

@class NSString, NSDictionary, NSDate;
@protocol DEDSecureArchiving, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DEDExtensionIdentifier.h"

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding>



@property (readonly, nonatomic) NSString *activityString; // ivar: _activityString
@property (readonly) NSString *bugSessionIdentifier; // ivar: _bugSessionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly) DEDExtensionIdentifier *dedIdentifier; // ivar: _dedIdentifier
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat gracePeriod; // ivar: _gracePeriod
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *parameters; // ivar: _parameters
@property (nonatomic) BOOL requiresClassBDataAccess; // ivar: _requiresClassBDataAccess
@property BOOL scheduled; // ivar: _scheduled
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDate *triggerDate; // ivar: _triggerDate


+(BOOL)supportsSecureCoding;
+(CGFloat)recommendedGracePeriodForDate:(id)arg0 ;
+(id)activityStringForBugSessionIdentifier:(id)arg0 dedIdentifier:(id)arg1 ;
+(id)allInfo;
+(id)archivedClasses;
+(id)log;
+(void)checkIn;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOverdue;
-(id)criteria;
-(id)initWithBugSessionIdentifier:(id)arg0 dedIdentifier:(id)arg1 runOnDate:(id)arg2 withGracePeriod:(CGFloat)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)addToStore;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFromStore;
-(void)run;
-(void)schedule;
-(void)unschedule;


@end


#endif