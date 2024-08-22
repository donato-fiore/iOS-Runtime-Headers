// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACTIVITYATTRIBUTION_H
#define SBACTIVITYATTRIBUTION_H

@class STActivityAttribution, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding>

 {
    STActivityAttribution *_attribution;
    NSString *_executablePath;
    BOOL _isSystemExecutable;
}


@property (readonly, copy, nonatomic) NSString *attributionGroup; // ivar: _attributionGroup
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifierMatchingDisplayName; // ivar: _bundleIdentifierMatchingDisplayName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;


-(BOOL)hasSameProcessAsAttribution:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_resolvedFormattedString:(id)arg0 forApplication:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSBActivityAttribution:(id)arg0 ;
-(id)initWithSTActivityAttribution:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_prepareDisplayName;


@end


#endif