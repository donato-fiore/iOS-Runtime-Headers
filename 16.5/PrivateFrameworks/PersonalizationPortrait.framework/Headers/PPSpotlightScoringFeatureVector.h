// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSPOTLIGHTSCORINGFEATUREVECTOR_H
#define PPSPOTLIGHTSCORINGFEATUREVECTOR_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface PPSpotlightScoringFeatureVector : NSObject {
    NSMutableSet *_features;
}




+(id)decodeFeatureVectorFromData:(id)arg0 version:(id)arg1 ;
+(id)featureVectorVersion;
-(BOOL)containsQidString:(id)arg0 ;
-(id)encodeAsData;
-(id)init;
-(id)qidStrings;
-(void)addQidString:(id)arg0 ;


@end


#endif