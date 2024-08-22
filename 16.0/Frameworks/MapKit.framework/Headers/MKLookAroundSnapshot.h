// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKLOOKAROUNDSNAPSHOT_H
#define MKLOOKAROUNDSNAPSHOT_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "MKMapSnapshot.h"

@interface MKLookAroundSnapshot : NSObject {
    MKMapSnapshot *_snapshot;
}


@property (readonly, nonatomic) UIImage *image;


-(id)initWithSnapshot:(id)arg0 ;


@end


#endif