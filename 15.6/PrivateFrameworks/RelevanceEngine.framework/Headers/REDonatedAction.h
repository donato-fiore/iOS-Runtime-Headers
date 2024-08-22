// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDONATEDACTION_H
#define REDONATEDACTION_H

@class NSString, NSDate, _DKEvent, NSArray;
@protocol NSSecureCoding, NSCopying, REDonatedActionIdentifierProviding;

#import <Foundation/Foundation.h>

#import "REIdentifier.h"

@interface REDonatedAction : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _isIntentBacked;
}


@property (readonly, nonatomic) NSObject<REDonatedActionIdentifierProviding> *actionTypeIdentifier; // ivar: _actionTypeIdentifier
@property (readonly, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSString *appLevelIdentifier; // ivar: _appLevelIdentifier
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) REIdentifier *donationIdentifier; // ivar: _donationIdentifier
@property (retain, nonatomic) _DKEvent *event; // ivar: _event
@property (readonly, nonatomic) NSString *eventLevelIdentifier; // ivar: _eventLevelIdentifier
@property (readonly, nonatomic) NSUInteger filteredShortcutType; // ivar: _filteredShortcutType
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *intentTypeName; // ivar: _intentTypeName
@property (readonly, nonatomic) NSString *localBundleIdentifier;
@property (readonly, nonatomic, getter=isLocalDonation) BOOL localDonation; // ivar: _localDonation
@property (readonly, nonatomic) NSDate *localSaveDate; // ivar: _localSaveDate
@property (readonly, nonatomic) NSArray *relevanceProviders; // ivar: _relevanceProviders
@property (readonly, nonatomic) NSUInteger relevanceProvidersHash; // ivar: _relevanceProvidersHash
@property (readonly, nonatomic) NSString *remoteBundleIdentifier;
@property (readonly, nonatomic) NSObject<REDonatedActionIdentifierProviding> *simplifiedActionTypeIdentifier; // ivar: _simplifiedActionTypeIdentifier
@property (readonly, nonatomic) NSUInteger trainingActionIdentifier;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportedActivityType:(id)arg0 forBundleID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bundleIdForExtensionId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hashRelevanceProviders:(id)arg0 ;
-(id)_initInteractionWithEvent:(id)arg0 filtered:(BOOL)arg1 ;
-(id)_initRelevantShortcutWithEvent:(id)arg0 filtered:(BOOL)arg1 ;
-(id)_initUserActivityWithEvent:(id)arg0 filtered:(BOOL)arg1 ;
-(id)_shortcutFilter;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)generateMetrics;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 filtered:(BOOL)arg1 ;
-(void)_loadDuetEvent:(id)arg0 ;
-(void)_loadShortcutIdentifiersFromIntent:(id)arg0 ;
-(void)_loadShortcutIdentifiersFromUserActivity:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadIntent:(id)arg0 ;
-(void)loadRelevantShortcut:(id)arg0 ;
-(void)loadUserActivity:(id)arg0 ;


@end


#endif