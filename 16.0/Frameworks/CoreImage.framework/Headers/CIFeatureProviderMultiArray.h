// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFEATUREPROVIDERMULTIARRAY_H
#define CIFEATUREPROVIDERMULTIARRAY_H

@class NSSet, MLMultiArray, NSString;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface CIFeatureProviderMultiArray : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *multiArray; // ivar: multiArray
@property (retain, nonatomic) NSString *name; // ivar: name


-(id)featureValueForName:(id)arg0 ;
-(id)initWithName:(id)arg0 array:(id)arg1 ;


@end


#endif