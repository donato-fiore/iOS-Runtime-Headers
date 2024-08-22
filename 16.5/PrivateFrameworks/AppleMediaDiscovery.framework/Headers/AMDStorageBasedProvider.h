// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDSTORAGEBASEDPROVIDER_H
#define AMDSTORAGEBASEDPROVIDER_H

@class NSString;


#import "AMDFeatureProvider.h"

@interface AMDStorageBasedProvider : AMDFeatureProvider

@property (retain, nonatomic) NSString *domain; // ivar: _domain


-(id)getFeatureWithName:(id)arg0 withColumn:(id)arg1 error:(*id)arg2 ;
-(id)initWithDomain:(id)arg0 ;
-(void)storeFeatureData:(id)arg0 error:(*id)arg1 ;


@end


#endif