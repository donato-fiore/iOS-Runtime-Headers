// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIDEOTHUMBNAILOUTPUTCONFIGURATION_H
#define CAMVIDEOTHUMBNAILOUTPUTCONFIGURATION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CAMVideoThumbnailOutputConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, nonatomic) CGSize thumbnailSize; // ivar: _thumbnailSize


-(id)initWithMode:(NSInteger)arg0 ;
-(id)initWithThumbnailSize:(struct CGSize )arg0 filters:(id)arg1 ;


@end


#endif