// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIOIMAGECONSTRAINT_H
#define MIOIMAGECONSTRAINT_H

@class NSString;
@protocol MIOFeatureValueConstraint;

#import <Foundation/Foundation.h>

#import "MIOImageSize.h"
#import "MIOImageSizeConstraint.h"

@interface MIOImageConstraint : NSObject <MIOFeatureValueConstraint>

 {
    ImageFeatureType _imageFeatureTypeParams;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MIOImageSize *imageSize; // ivar: _imageSize
@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) MIOImageSizeConstraint *sizeConstraint; // ivar: _sizeConstraint
@property (readonly) Class superclass;


-(*void)imageFeatureTypeSpecification;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpecification:(*void)arg0 ;


@end


#endif