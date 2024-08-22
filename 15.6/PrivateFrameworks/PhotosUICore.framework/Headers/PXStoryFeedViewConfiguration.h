// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYFEEDVIEWCONFIGURATION_H
#define PXSTORYFEEDVIEWCONFIGURATION_H

@class UIViewController;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"
#import "PXStoryFeedConfiguration.h"

@interface PXStoryFeedViewConfiguration : NSObject <NSCopying>



@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) PXStoryFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFeedConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 ;


@end


#endif