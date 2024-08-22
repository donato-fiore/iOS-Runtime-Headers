// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTRACKEDPARAGRAPHIMAGEINFO_H
#define ICTRACKEDPARAGRAPHIMAGEINFO_H

@class UIImage, UIImageView, ICTrackedParagraph, NSString;

#import <Foundation/Foundation.h>


@interface ICTrackedParagraphImageInfo : NSObject

@property (nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (nonatomic) BOOL estimated; // ivar: _estimated
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImageView *imageViewIfExists; // ivar: _imageViewIfExists
@property (nonatomic) CGRect rect; // ivar: _rect
@property (retain, nonatomic) ICTrackedParagraph *trackedParagraph; // ivar: _trackedParagraph
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid




@end


#endif