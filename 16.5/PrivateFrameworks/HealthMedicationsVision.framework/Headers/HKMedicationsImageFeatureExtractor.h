// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSIMAGEFEATUREEXTRACTOR_H
#define HKMEDICATIONSIMAGEFEATUREEXTRACTOR_H


#import <Foundation/Foundation.h>

#import "HKMedicationsTextNDCParser.h"

@interface HKMedicationsImageFeatureExtractor : NSObject

@property (retain, nonatomic) HKMedicationsTextNDCParser *ndcParser; // ivar: _ndcParser


-(id)init;
-(void)extractFeaturesFrom:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif