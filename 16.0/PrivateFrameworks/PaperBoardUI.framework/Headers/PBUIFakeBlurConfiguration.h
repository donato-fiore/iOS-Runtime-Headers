// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIFAKEBLURCONFIGURATION_H
#define PBUIFAKEBLURCONFIGURATION_H

@class UITraitCollection, NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface PBUIFakeBlurConfiguration : NSObject <BSDescriptionProviding, NSCopying>

 {
    NSInteger _variant;
    NSInteger _requestedStyle;
    UITraitCollection *_traitCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif