// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDCOREDATAFEATUREPROVIDER_H
#define AMDCOREDATAFEATUREPROVIDER_H

@class NSString;
@protocol AMDFeatureProvider;

#import <Foundation/Foundation.h>


@interface AMDCoreDataFeatureProvider : NSObject <AMDFeatureProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)getFeatureWithName:(id)arg0 ;
-(id)initWithDomain:(id)arg0 ;


@end


#endif