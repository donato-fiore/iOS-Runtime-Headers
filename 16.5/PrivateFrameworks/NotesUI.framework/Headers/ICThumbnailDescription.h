// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILDESCRIPTION_H
#define ICTHUMBNAILDESCRIPTION_H

@class NSSet, NSDate, NSError, UIImage;

#import <Foundation/Foundation.h>

#import "ICThumbnailConfiguration.h"

@interface ICThumbnailDescription : NSObject

@property (retain, nonatomic) NSSet *associatedObjectIdentifiers; // ivar: _associatedObjectIdentifiers
@property (nonatomic, getter=isCached) BOOL cached; // ivar: _cached
@property (readonly, nonatomic) ICThumbnailConfiguration *configuration; // ivar: _configuration
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGFloat fetchDuration; // ivar: _fetchDuration
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSUInteger imageScaling; // ivar: _imageScaling
@property (readonly, nonatomic) NSInteger preferredContentMode;
@property (nonatomic) NSInteger thumbnailDecorationType; // ivar: _thumbnailDecorationType


-(id)initWithConfiguration:(id)arg0 ;


@end


#endif