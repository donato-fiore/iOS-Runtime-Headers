// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKMARKERFEATUREHANDLE_H
#define VKMARKERFEATUREHANDLE_H

@class GEOFeatureStyleAttributes;

#import <Foundation/Foundation.h>


@interface VKMarkerFeatureHandle : NSObject {
    MarkerFeatureHandle _actualHandle;
    GEOFeatureStyleAttributes *_styleAttributes;
    int _featureType;
}




-(*void)actualHandle;
-(NSInteger)featureIndex;
-(id)initWithMarkerHandle:(*void)arg0 featureType:(int)arg1 ;
-(id)styleAttributes;
-(int)featureType;
-(int)tileStyle;
-(int)tileX;
-(int)tileY;
-(int)tileZ;
-(unsigned int)tileVersion;
-(void)dealloc;


@end


#endif