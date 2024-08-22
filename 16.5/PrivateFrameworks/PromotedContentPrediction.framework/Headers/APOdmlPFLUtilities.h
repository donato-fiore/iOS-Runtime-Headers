// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLPFLUTILITIES_H
#define APODMLPFLUTILITIES_H


#import <Foundation/Foundation.h>


@interface APOdmlPFLUtilities : NSObject



+(*float)convertToFloat:(id)arg0 ;
+(id)convertToArray:(*float)arg0 count:(NSUInteger)arg1 ;
+(id)keyForTypes:(id)arg0 placementType:(NSUInteger)arg1 assetManagerType:(NSUInteger)arg2 ;
+(id)pluginStringForPlacementType:(NSUInteger)arg0 ;


@end


#endif