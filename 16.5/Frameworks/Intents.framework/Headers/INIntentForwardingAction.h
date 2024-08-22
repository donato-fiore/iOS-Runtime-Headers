// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTFORWARDINGACTION_H
#define ININTENTFORWARDINGACTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INIntent.h"

@interface INIntentForwardingAction : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsForegroundAppLaunch; // ivar: _allowsForegroundAppLaunch
@property (nonatomic) BOOL allowsScenelessAppLaunch; // ivar: _allowsScenelessAppLaunch
@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) ? hostProcessAuditToken; // ivar: _hostProcessAuditToken
@property (readonly, nonatomic) INIntent *intent; // ivar: _intent
@property (nonatomic) CGFloat requestTimeout; // ivar: _requestTimeout


+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif