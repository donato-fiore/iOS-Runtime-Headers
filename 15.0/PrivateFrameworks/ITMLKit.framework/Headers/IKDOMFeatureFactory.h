// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDOMFEATUREFACTORY_H
#define IKDOMFEATUREFACTORY_H


#import <Foundation/Foundation.h>


@interface IKDOMFeatureFactory : NSObject



+(id)featureForName:(id)arg0 withDOMNode:(id)arg1 ;
+(void)initialize;
+(void)registerClass:(Class)arg0 forFeatureName:(id)arg1 ;


@end


#endif