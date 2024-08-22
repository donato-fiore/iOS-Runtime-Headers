// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPLUGINSPECIFICATION_H
#define BSPLUGINSPECIFICATION_H

@class NSArray, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSPluginSpecification : NSObject <BSDescriptionProviding>

 {
    NSArray *_allowListedNames;
    NSString *_type;
    NSString *_classOrProtocolName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif