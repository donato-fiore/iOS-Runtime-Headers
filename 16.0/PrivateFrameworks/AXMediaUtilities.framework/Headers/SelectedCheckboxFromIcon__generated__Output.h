// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SELECTEDCHECKBOXFROMICON__GENERATED__OUTPUT_H
#define SELECTEDCHECKBOXFROMICON__GENERATED__OUTPUT_H

@class NSSet, NSString, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSDictionary *labelProbability; // ivar: _labelProbability


-(id)featureValueForName:(id)arg0 ;
-(id)initWithLabelProbability:(id)arg0 label:(id)arg1 ;


@end


#endif