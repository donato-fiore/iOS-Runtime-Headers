// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACTIVITYATTRIBUTION_H
#define SBACTIVITYATTRIBUTION_H

@class STActivityAttribution, NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBActivityAttribution : NSObject <NSCopying, BSDescriptionProviding>

 {
    STActivityAttribution *_attribution;
    BOOL _isSystemExecutable;
}


@property (readonly, copy, nonatomic) NSString *activeEntityBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *attributionGroup; // ivar: _attributionGroup
@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *executableDisplayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSystemService;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *website;


-(BOOL)hasMatchingAttributedEntity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_activityAttribution;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithSTActivityAttribution:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif