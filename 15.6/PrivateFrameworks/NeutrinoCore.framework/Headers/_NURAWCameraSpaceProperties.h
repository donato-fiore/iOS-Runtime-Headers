// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NURAWCAMERASPACEPROPERTIES_H
#define _NURAWCAMERASPACEPROPERTIES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _NURAWCameraSpaceProperties : NSObject

@property CGFloat whiteFactor; // ivar: _whiteFactor
@property CGFloat whiteValue; // ivar: _whiteValue
@property (retain) NSArray *xyzToCamera1; // ivar: _xyzToCamera1
@property (retain) NSArray *xyzToCamera2; // ivar: _xyzToCamera2


-(id)description;


@end


#endif