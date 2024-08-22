// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TBDEFAULTS_H
#define TBDEFAULTS_H


#import <Foundation/Foundation.h>


@interface TBDefaults : NSObject



+(CGFloat)nearbyTileSearchRadius;
+(CGFloat)tileSearchRadius;
+(unsigned char)zoomLevel;
+(void)setOverrideZoomLevel:(unsigned char)arg0 ;


@end


#endif