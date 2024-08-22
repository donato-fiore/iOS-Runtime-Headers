// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIMAGERENDERREQUEST_H
#define NUIMAGERENDERREQUEST_H

@class NSString;
@protocol NUTimeBased, NUExtentPolicy, NURegionPolicy, NUScalePolicy, NUMutableImage;


#import "NURenderRequest.h"
#import "NUColorSpace.h"
#import "NUPixelFormat.h"

@interface NUImageRenderRequest : NURenderRequest <NUTimeBased>



@property NSInteger auxiliaryImageType; // ivar: _auxiliaryImageType
@property ? borderSize; // ivar: _borderSize
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<NUExtentPolicy> *extentPolicy; // ivar: _extentPolicy
@property (readonly) NSUInteger hash;
@property (retain) NUPixelFormat *pixelFormat; // ivar: _pixelFormat
@property (retain) NSObject<NURegionPolicy> *regionPolicy; // ivar: _regionPolicy
@property (retain) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (readonly) Class superclass;
@property (retain) NSObject<NUMutableImage> *targetImage; // ivar: _targetImage
@property ? tileSize; // ivar: _tileSize
@property (nonatomic) ? time;


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;


@end


#endif