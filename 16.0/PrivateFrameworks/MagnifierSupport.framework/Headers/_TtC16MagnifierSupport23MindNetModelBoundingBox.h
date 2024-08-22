// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT23MINDNETMODELBOUNDINGBOX_H
#define _TTC16MAGNIFIERSUPPORT23MINDNETMODELBOUNDINGBOX_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC16MagnifierSupport23MindNetModelBoundingBox : NSObject {
    ? id;
    ? heat;
    ? angle;
    ? rect;
    ? classIndex;
    ? heatByClass;
    ? firstSeen;
    ? lastSeen;
    ? depth;
    ? centroid3d;
    ? knownFeaturePoints;
    ? physicalSize;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif