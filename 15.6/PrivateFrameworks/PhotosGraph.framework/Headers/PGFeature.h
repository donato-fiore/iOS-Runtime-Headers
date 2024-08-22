// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGFEATURE_H
#define PGFEATURE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PGFeature : NSObject {
    id *_typeSpecificIdentifier;
}


@property (readonly) BOOL isNoneFeature;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSUInteger type; // ivar: _type


+(id)featureWithMeaningfulEvent:(id)arg0 ;
+(id)featureWithNode:(id)arg0 ;
+(id)featureWithType:(NSUInteger)arg0 name:(id)arg1 ;
+(id)featureWithType:(NSUInteger)arg0 node:(id)arg1 ;
+(id)featuresForEncodedFeatures:(id)arg0 ;
+(id)nameForNode:(id)arg0 ;
+(id)noneFeatureWithType:(NSUInteger)arg0 ;
+(id)stringForFeatureType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)encodedFeature;
-(id)initWithEncodedFeature:(id)arg0 ;
-(id)nodeInGraph:(id)arg0 ;


@end


#endif