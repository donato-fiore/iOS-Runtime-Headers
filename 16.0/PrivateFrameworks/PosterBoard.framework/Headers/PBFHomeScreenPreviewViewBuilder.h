// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFHOMESCREENPREVIEWVIEWBUILDER_H
#define PBFHOMESCREENPREVIEWVIEWBUILDER_H

@class PRPosterConfiguration, UIScreen, UIImage;

#import <Foundation/Foundation.h>


@interface PBFHomeScreenPreviewViewBuilder : NSObject

@property (retain, nonatomic) PRPosterConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL excludesSilhouette; // ivar: _excludesSilhouette
@property (copy, nonatomic) id *renderingCompletionHandler; // ivar: _renderingCompletionHandler
@property (retain, nonatomic) UIScreen *screen; // ivar: _screen
@property (retain, nonatomic) UIImage *unlockedPosterSnapshot; // ivar: _unlockedPosterSnapshot
@property (nonatomic) CGFloat viewScreenSizeScale; // ivar: _viewScreenSizeScale


-(id)buildView;
-(id)init;


@end


#endif