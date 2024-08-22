// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRINGFACTORY_H
#define SPRINGFACTORY_H

@class NSString;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface SpringFactory : NSObject <_UIBasicAnimationFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedFactory;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimation;


@end


#endif