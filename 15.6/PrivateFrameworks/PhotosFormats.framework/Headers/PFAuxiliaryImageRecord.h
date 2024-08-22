// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFAUXILIARYIMAGERECORD_H
#define PFAUXILIARYIMAGERECORD_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PFAuxiliaryImageRecord : NSObject

@property (retain) NSDictionary *auxiliaryImageInfo; // ivar: _auxiliaryImageInfo
@property (retain) NSString *identifier; // ivar: _identifier
@property unsigned int sourceImageOrientation; // ivar: _sourceImageOrientation
@property CGSize sourceImageSize; // ivar: _sourceImageSize


-(CGFloat)effectiveScaleFactorForDestinationImageSize:(struct CGSize )arg0 ;


@end


#endif