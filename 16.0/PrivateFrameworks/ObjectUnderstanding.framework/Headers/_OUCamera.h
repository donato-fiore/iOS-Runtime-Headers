// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OUCAMERA_H
#define _OUCAMERA_H

@protocol OUCamera;

#import <Foundation/Foundation.h>


@interface _OUCamera : NSObject <OUCamera>



@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (nonatomic) ? intrinsics; // ivar: _intrinsics
@property (nonatomic) ? pose; // ivar: _pose
@property (nonatomic) ? transform; // ivar: transform


-(id)initWithDictionary:(id)arg0 ;


@end


#endif