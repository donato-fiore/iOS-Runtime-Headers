// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSCENEPARAMETERS_H
#define FBSSCENEPARAMETERS_H

@class NSString;
@protocol BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "FBSSceneClientSettings.h"
#import "FBSSceneSettings.h"
#import "FBSSceneSpecification.h"

@interface FBSSceneParameters : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding>



@property (copy, nonatomic) FBSSceneClientSettings *clientSettings; // ivar: _clientSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) FBSSceneSettings *settings; // ivar: _settings
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification; // ivar: _specification
@property (readonly) Class superclass;


+(id)parametersForSpecification:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithSpecification:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)updateSettingsWithBlock:(id)arg0 ;


@end


#endif