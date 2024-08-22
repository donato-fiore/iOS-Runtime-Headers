// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLSLPRESPONSEPARSER_H
#define APODMLSLPRESPONSEPARSER_H


#import <Foundation/Foundation.h>


@interface APOdmlSLPResponseParser : NSObject



+(BOOL)isValidResponse:(id)arg0 ;
+(id)convertArrayToFeatureValue:(id)arg0 ;
+(id)convertStringToFeatureValue:(id)arg0 ;
+(id)convertToFeatureValue:(id)arg0 ;
+(id)parseFeature:(id)arg0 withTopLevelKey:(id)arg1 forKey:(id)arg2 ;
+(id)parseFeatureDictionaryForFeatureValues:(id)arg0 ;
+(id)parseResponseForFeatureValues:(id)arg0 ;


@end


#endif