// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXFREEMOMENTFEATUREVECTOR_H
#define ATXFREEMOMENTFEATUREVECTOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXFreeMomentFeatureVector : NSObject {
    NSMutableDictionary *_featureVector;
}




-(BOOL)boolValueForFeature:(int)arg0 ;
-(id)featureVectorDict;
-(id)init;
-(id)initWithFeatureVectorDict:(id)arg0 ;
-(id)valueForFeature:(int)arg0 ;
-(void)setDefaultBinaryValue:(BOOL)arg0 ifBinaryFeatureNotInFeatureVector:(int)arg1 ;
-(void)setDefaultValue:(id)arg0 ifFeatureNotInFeatureVector:(int)arg1 ;
-(void)setValue:(BOOL)arg0 forBinaryFeature:(int)arg1 ;
-(void)setValue:(id)arg0 forFeature:(int)arg1 ;


@end


#endif