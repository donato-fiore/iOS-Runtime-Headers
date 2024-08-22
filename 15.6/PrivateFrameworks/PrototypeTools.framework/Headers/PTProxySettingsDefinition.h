// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTPROXYSETTINGSDEFINITION_H
#define PTPROXYSETTINGSDEFINITION_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PTModule.h"
#import "PTSettingsClassStructure.h"

@interface PTProxySettingsDefinition : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *childDefinitions; // ivar: _childDefinitions
@property (retain, nonatomic) NSDictionary *defaultValueArchive; // ivar: _defaultValueArchive
@property (retain, nonatomic) PTModule *module; // ivar: _module
@property (retain, nonatomic) PTSettingsClassStructure *structure; // ivar: _structure


+(BOOL)supportsSecureCoding;
+(id)definitionForSettingsClass:(Class)arg0 ;
-(BOOL)allSettingsClassesExistAndHaveCorrectVersion;
-(BOOL)isEqual:(id)arg0 ;
-(Class)settingsClass;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif