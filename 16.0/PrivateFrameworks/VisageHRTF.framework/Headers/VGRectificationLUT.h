// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGRECTIFICATIONLUT_H
#define VGRECTIFICATIONLUT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface VGRectificationLUT : NSObject {
    NSData *_lookupTable;
    CGPoint _opticalCenter;
}




-(id)initWithLookupTable:(id)arg0 withDistortionOpticalCenter:(struct CGPoint )arg1 ;
-(void)undistortImage:(struct __CVBuffer *)arg0 toRectilinearImage:(struct __CVBuffer *)arg1 ;


@end


#endif