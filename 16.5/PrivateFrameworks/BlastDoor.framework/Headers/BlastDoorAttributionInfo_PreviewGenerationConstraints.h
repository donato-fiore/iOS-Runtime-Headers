// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORATTRIBUTIONINFO_PREVIEWGENERATIONCONSTRAINTS_H
#define BLASTDOORATTRIBUTIONINFO_PREVIEWGENERATIONCONSTRAINTS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorAttributionInfo_PreviewGenerationConstraints : NSObject {
    ? attributionInfo_PreviewGenerationConstraints;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_maxPixelWidth;
@property (nonatomic, readonly) BOOL has_minThumbSizeHeight;
@property (nonatomic, readonly) BOOL has_minThumbSizeWidth;
@property (nonatomic, readonly) BOOL has_scale;
@property (nonatomic, readonly) BOOL isSticker;
@property (nonatomic, readonly) CGFloat maxPixelWidth;
@property (nonatomic, readonly) CGFloat minThumbSizeHeight;
@property (nonatomic, readonly) CGFloat minThumbSizeWidth;
@property (nonatomic, readonly) CGFloat scale;


-(id)init;


@end


#endif