// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFORMATIONFEATURESET_H
#define ATXINFORMATIONFEATURESET_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ATXInformationFeatureSet : NSObject <NSCopying>

 {
    NSDictionary *_features;
}




-(CGFloat)valueForFeature:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithFeatureDictionary:(id)arg0 ;


@end


#endif