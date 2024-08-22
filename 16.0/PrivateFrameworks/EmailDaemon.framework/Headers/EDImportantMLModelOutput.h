// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDIMPORTANTMLMODELOUTPUT_H
#define EDIMPORTANTMLMODELOUTPUT_H

@class NSSet, NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (nonatomic) NSInteger important; // ivar: _important
@property (retain, nonatomic) NSDictionary *importantProbability; // ivar: _importantProbability


-(id)featureValueForName:(id)arg0 ;
-(id)initWithImportant:(NSInteger)arg0 importantProbability:(id)arg1 ;


@end


#endif