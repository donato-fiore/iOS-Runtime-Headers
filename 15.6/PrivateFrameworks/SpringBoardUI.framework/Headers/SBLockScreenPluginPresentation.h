// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBLOCKSCREENPLUGINPRESENTATION_H
#define SBLOCKSCREENPLUGINPRESENTATION_H

@class _UILegibilitySettings;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SBLockScreenPluginPresentation : NSObject <NSCopying>



@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: legibilitySettings
@property (nonatomic) UIEdgeInsets suggestedContentInsets; // ivar: suggestedContentInsets


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif