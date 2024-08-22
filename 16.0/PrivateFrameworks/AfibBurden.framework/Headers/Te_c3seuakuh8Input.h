// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TE_C3SEUAKUH8INPUT_H
#define TE_C3SEUAKUH8INPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface Te_c3seuakuh8Input : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *Placeholder; // ivar: _Placeholder
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithPlaceholder:(id)arg0 ;


@end


#endif