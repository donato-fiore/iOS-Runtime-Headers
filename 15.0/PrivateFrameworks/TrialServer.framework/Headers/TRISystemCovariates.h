// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISYSTEMCOVARIATES_H
#define TRISYSTEMCOVARIATES_H

@class TRISystemConfiguration, NSDictionary;
@protocol TRISystemCovariateProviding;

#import <Foundation/Foundation.h>


@interface TRISystemCovariates : NSObject <TRISystemCovariateProviding>

 {
    TRISystemConfiguration *_sysConfig;
    NSDictionary *_dictionary;
}




-(id)dictionary;
-(id)getContextValueWithName:(id)arg0 ;
-(id)initWithPaths:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)tri_contextValueWithName:(id)arg0 ;


@end


#endif