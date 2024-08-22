// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSPLUGINBUNDLE_H
#define BSPLUGINBUNDLE_H

@class NSBundle, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface BSPluginBundle : NSObject <BSDescriptionProviding>

 {
    NSBundle *_bundle;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) Class principalClass; // ivar: _principalClass
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(BOOL)loadPlugin;
-(BOOL)loadPlugin:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif