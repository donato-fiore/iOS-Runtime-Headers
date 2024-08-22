// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBELASTICVALUEVIEWCONTROLLERFACTORY_H
#define SBELASTICVALUEVIEWCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>


@interface SBElasticValueViewControllerFactory : NSObject {
    id *_generator;
}




+(id)factoryWithBrightnessDataSource:(id)arg0 ;
+(id)factoryWithVolumeDataSource:(id)arg0 ;
-(id)_initWithViewControllerGenerator:(id)arg0 ;
-(id)elasticValueViewController;


@end


#endif