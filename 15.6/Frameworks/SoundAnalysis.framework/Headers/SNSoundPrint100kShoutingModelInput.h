// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNSOUNDPRINT100KSHOUTINGMODELINPUT_H
#define SNSOUNDPRINT100KSHOUTINGMODELINPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrint100kShoutingModelInput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *soundprint_Placeholder; // ivar: _soundprint_Placeholder


-(id)featureValueForName:(id)arg0 ;
-(id)initWithSoundprint_Placeholder:(id)arg0 ;


@end


#endif