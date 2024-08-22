// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIDOWNLOADBUTTONPROPERTIES_H
#define VUIDOWNLOADBUTTONPROPERTIES_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface VUIDownloadButtonProperties : NSObject

@property (retain, nonatomic) UIImage *badgeImage; // ivar: _badgeImage
@property (nonatomic) NSUInteger downloadState; // ivar: _downloadState
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL hasBadgeImage; // ivar: _hasBadgeImage
@property (nonatomic) BOOL hasBorder; // ivar: _hasBorder
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (nonatomic) BOOL hasTitle; // ivar: _hasTitle
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic, getter=isInderminate) BOOL indeterminate; // ivar: _indeterminate
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif