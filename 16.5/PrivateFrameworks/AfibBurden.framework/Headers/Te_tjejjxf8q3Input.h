// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TE_TJEJJXF8Q3INPUT_H
#define TE_TJEJJXF8Q3INPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface Te_tjejjxf8q3Input : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *Placeholder; // ivar: _Placeholder
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPlaceholder:(id)arg0 ;


@end


#endif