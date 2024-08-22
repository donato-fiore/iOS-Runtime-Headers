// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIREFINEREGIONREQUEST_H
#define VIREFINEREGIONREQUEST_H

@protocol VIImageContent, MTLDevice;

#import <Foundation/Foundation.h>


@interface VIRefineRegionRequest : NSObject

@property (readonly, nonatomic) NSObject<VIImageContent> *image; // ivar: _image
@property (readonly, nonatomic) NSInteger imageType; // ivar: _imageType
@property (readonly, nonatomic) NSObject<MTLDevice> *preferredMetalDevice; // ivar: _preferredMetalDevice
@property (readonly, nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest


-(id)initWithImage:(id)arg0 regionOfInterest:(struct CGRect )arg1 imageType:(NSInteger)arg2 preferredMetalDevice:(id)arg3 ;


@end


#endif