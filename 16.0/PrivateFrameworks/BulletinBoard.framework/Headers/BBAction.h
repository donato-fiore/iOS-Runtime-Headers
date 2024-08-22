// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BBACTION_H
#define BBACTION_H

@class NSDictionary, NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBAppearance.h"

@interface BBAction : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _deliverResponse;
}


@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSDictionary *activatePluginContext; // ivar: _activatePluginContext
@property (copy, nonatomic) NSString *activatePluginName; // ivar: _activatePluginName
@property (nonatomic) NSUInteger activationMode; // ivar: _activationMode
@property (copy, nonatomic) BBAppearance *appearance; // ivar: _appearance
@property (nonatomic, getter=isAuthenticationRequired) BOOL authenticationRequired; // ivar: _authenticationRequired
@property (nonatomic) NSInteger behavior; // ivar: _behavior
@property (copy, nonatomic) NSDictionary *behaviorParameters; // ivar: _behaviorParameters
@property (nonatomic) BOOL canBypassPinLock;
@property (readonly, nonatomic) BOOL hasInteractiveAction;
@property (readonly, nonatomic) BOOL hasLaunchAction;
@property (readonly, nonatomic) BOOL hasPluginAction;
@property (readonly, nonatomic) BOOL hasRemoteViewAction;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *internalBlock; // ivar: _internalBlock
@property (copy, nonatomic) NSString *launchBundleID; // ivar: _launchBundleID
@property (nonatomic) BOOL launchCanBypassPinLock; // ivar: _launchCanBypassPinLock
@property (copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (copy, nonatomic) NSString *remoteServiceBundleIdentifier; // ivar: _remoteServiceBundleIdentifier
@property (copy, nonatomic) NSString *remoteViewControllerClassName; // ivar: _remoteViewControllerClassName
@property (nonatomic) BOOL shouldDismissBulletin; // ivar: _shouldDismissBulletin


+(BOOL)supportsSecureCoding;
+(id)action;
+(id)actionWithActivatePluginName:(id)arg0 activationContext:(id)arg1 ;
+(id)actionWithAppearance:(id)arg0 ;
+(id)actionWithCallblock:(id)arg0 ;
+(id)actionWithIdentifier:(id)arg0 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 ;
+(id)actionWithLaunchBundleID:(id)arg0 ;
+(id)actionWithLaunchBundleID:(id)arg0 callblock:(id)arg1 ;
+(id)actionWithLaunchURL:(id)arg0 ;
+(id)actionWithLaunchURL:(id)arg0 callblock:(id)arg1 ;
-(BOOL)deliverResponse:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_nameForActionType:(NSInteger)arg0 ;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)bundleID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)partialDescription;
-(id)replacementObjectForCoder:(id)arg0 ;
-(id)url;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCallblock:(id)arg0 ;


@end


#endif