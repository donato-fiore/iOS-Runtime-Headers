// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUVIDEOPROPERTIES_H
#define _NUVIDEOPROPERTIES_H

@class NSDictionary, NSString, NSArray, NSURL;
@protocol NUVideoProperties;

#import <Foundation/Foundation.h>


@interface _NUVideoProperties : NSObject <NUVideoProperties>



@property (nonatomic) ? cleanAperture; // ivar: _cleanAperture
@property (retain, nonatomic) NSDictionary *colorProperties; // ivar: _colorProperties
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (nonatomic) ? livePhotoKeyFrameTime; // ivar: _livePhotoKeyFrameTime
@property (retain, nonatomic) NSArray *metadata; // ivar: _metadata
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) ? originalCleanAperture; // ivar: _originalCleanAperture
@property (nonatomic) ? originalSize; // ivar: _originalSize
@property (nonatomic) ? size; // ivar: _size
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithProperties:(id)arg0 ;


@end


#endif