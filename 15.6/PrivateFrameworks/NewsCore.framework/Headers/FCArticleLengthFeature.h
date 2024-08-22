// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCARTICLELENGTHFEATURE_H
#define FCARTICLELENGTHFEATURE_H

@class NSString;


#import "FCPersonalizationFeature.h"

@interface FCArticleLengthFeature : FCPersonalizationFeature

@property (retain, nonatomic) NSString *lengthID; // ivar: _lengthID


+(id)longLengthFeature;
+(id)mediumLengthFeature;
+(id)shortLengthFeature;
-(CGFloat)featureWeightWithConfigurableValues:(id)arg0 publisherID:(id)arg1 ;
-(id)init;
-(id)initWithLengthIdentifier:(id)arg0 ;
-(id)initWithPersonalizationIdentifier:(id)arg0 ;


@end


#endif