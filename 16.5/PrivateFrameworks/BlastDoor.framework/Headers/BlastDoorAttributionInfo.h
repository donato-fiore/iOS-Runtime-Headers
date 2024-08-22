// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLASTDOORATTRIBUTIONINFO_H
#define BLASTDOORATTRIBUTIONINFO_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BlastDoorAttributionInfo_PreviewGenerationConstraints.h"

@interface BlastDoorAttributionInfo : NSObject {
    ? attributionInfo;
}


@property (nonatomic, readonly) NSString *accessibilityStickerName;
@property (nonatomic, readonly) NSUInteger adamID;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL has_adamID;
@property (nonatomic, readonly) BOOL has_previewGenerationSizeHeight;
@property (nonatomic, readonly) BOOL has_previewGenerationSizeWidth;
@property (nonatomic, readonly) NSString *packName;
@property (nonatomic, readonly) BlastDoorAttributionInfo_PreviewGenerationConstraints *previewGenerationConstraints;
@property (nonatomic, readonly) CGFloat previewGenerationSizeHeight;
@property (nonatomic, readonly) CGFloat previewGenerationSizeWidth;


-(id)init;


@end


#endif