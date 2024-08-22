// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSYSTEMNOTESPRESENTATIONCONFIGURATION_H
#define SBSSYSTEMNOTESPRESENTATIONCONFIGURATION_H

@class NSData, NSString, NSUUID, NSUserActivity;
@protocol BSDescriptionProviding, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBSSystemNotesPresentationConfiguration : NSObject <BSDescriptionProviding, NSSecureCoding, NSCopying>

 {
    NSData *_userActivityData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger preferredPresentationMode; // ivar: _preferredPresentationMode
@property (readonly, copy, nonatomic) NSString *sceneBundleIdentifier; // ivar: _sceneBundleIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, nonatomic) NSData *userActivityData;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSystemNotesPresentationConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSceneBundleIdentifier:(id)arg0 ;
-(id)initWithSceneBundleIdentifier:(id)arg0 userActivity:(id)arg1 ;
-(id)initWithSceneBundleIdentifier:(id)arg0 userActivity:(id)arg1 preferredPresentationMode:(NSInteger)arg2 ;
-(id)initWithSceneBundleIdentifier:(id)arg0 userActivity:(id)arg1 preferredPresentationMode:(NSInteger)arg2 identifier:(id)arg3 ;
-(id)presentationConfigurationWithPreferredPresentationMode:(NSInteger)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForXPCCall:(id)arg0 ;


@end


#endif