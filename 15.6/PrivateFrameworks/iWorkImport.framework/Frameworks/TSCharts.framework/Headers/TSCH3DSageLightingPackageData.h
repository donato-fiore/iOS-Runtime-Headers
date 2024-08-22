// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DSAGELIGHTINGPACKAGEDATA_H
#define TSCH3DSAGELIGHTINGPACKAGEDATA_H

@class NSDictionary, NSArray;
@protocol TSCH3DSageLightingPackageData;

#import <Foundation/Foundation.h>


@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData>

 {
    NSDictionary *_package;
    NSArray *_lights;
}




+(id)dataWithDictionary:(id)arg0 ;
-(BOOL)enabledAtIndex:(NSUInteger)arg0 ;
-(NSInteger)coordinateSpaceAtIndex:(NSUInteger)arg0 ;
-(NSInteger)typeAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(float)cutOffAngleAtIndex:(NSUInteger)arg0 ;
-(float)dropOffRateAtIndex:(NSUInteger)arg0 ;
-(float)intensityAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)nameAtIndex:(NSUInteger)arg0 ;
-(id)packageName;
-(struct Color )ambientColorAtIndex:(NSUInteger)arg0 ;
-(struct Color )colorAtIndex:(NSUInteger)arg0 redKey:(id)arg1 greenKey:(id)arg2 blueKey:(id)arg3 ;
-(struct Color )diffuseColorAtIndex:(NSUInteger)arg0 ;
-(struct Color )specularColorAtIndex:(NSUInteger)arg0 ;
-(struct Vector3 )attenuationAtIndex:(NSUInteger)arg0 ;
-(struct Vector3 )directionAtIndex:(NSUInteger)arg0 ;
-(struct Vector3 )positionAtIndex:(NSUInteger)arg0 ;


@end


#endif