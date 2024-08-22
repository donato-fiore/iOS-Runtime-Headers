// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFFOCUSPOSTERCONFIGURATIONMETADATA_H
#define PBFFOCUSPOSTERCONFIGURATIONMETADATA_H

@class UIImage, NSString;
@protocol PBFPosterPreview;

#import <Foundation/Foundation.h>


@interface PBFFocusPosterConfigurationMetadata : NSObject

@property (retain, nonatomic) UIImage *cachedSnapshot; // ivar: _cachedSnapshot
@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (copy, nonatomic) NSString *otherFocusDisplayName; // ivar: _otherFocusDisplayName
@property (copy, nonatomic) NSString *otherFocusSymbolImageName; // ivar: _otherFocusSymbolImageName
@property (retain, nonatomic) NSObject<PBFPosterPreview> *posterPreview; // ivar: _posterPreview




@end


#endif