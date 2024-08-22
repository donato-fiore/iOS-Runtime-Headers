// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHPRESENTATIONENTRY_H
#define BLSHPRESENTATIONENTRY_H

@protocol BLSHBacklightSceneHostEnvironment;

#import <Foundation/Foundation.h>

#import "BLSHEnvironmentDateSpecifier.h"

@interface BLSHPresentationEntry : NSObject

@property (readonly, nonatomic) BLSHEnvironmentDateSpecifier *currentSpecifier;
@property (readonly, nonatomic) NSObject<BLSHBacklightSceneHostEnvironment> *environment; // ivar: _environment
@property (retain, nonatomic) id *userObject; // ivar: _userObject


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithEnvironment:(id)arg0 userObject:(id)arg1 ;


@end


#endif