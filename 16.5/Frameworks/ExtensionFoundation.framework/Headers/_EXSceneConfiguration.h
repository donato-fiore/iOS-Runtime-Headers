// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENECONFIGURATION_H
#define _EXSCENECONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_EXPromise.h"
#import "_EXSceneSessionParameters.h"

@interface _EXSceneConfiguration : NSObject <NSCopying>



@property (readonly) _EXPromise *initializationPromise;
@property (readonly) _EXSceneSessionParameters *parameters; // ivar: _parameters
@property (readonly, copy) NSString *role;
@property (retain, nonatomic) Class sceneClass; // ivar: _sceneClass
@property (retain, nonatomic) Class sceneDelegateClass; // ivar: _sceneDelegateClass
@property (copy) NSString *sceneDelegateClassName; // ivar: _sceneDelegateClassName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initializationParametersOfClass:(Class)arg0 error:(*id)arg1 ;


@end


#endif