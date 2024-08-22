// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMDFEATUREPROVIDER_H
#define AMDFEATUREPROVIDER_H


#import <Foundation/Foundation.h>


@interface AMDFeatureProvider : NSObject



+(id)getProviderForSource:(id)arg0 WithDomain:(id)arg1 ;
-(id)getFeatureWithName:(id)arg0 error:(*id)arg1 ;
-(void)storeFeatureData:(id)arg0 error:(*id)arg1 ;


@end


#endif