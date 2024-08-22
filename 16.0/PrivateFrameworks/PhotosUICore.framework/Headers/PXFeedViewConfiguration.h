// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDVIEWCONFIGURATION_H
#define PXFEEDVIEWCONFIGURATION_H

@class UIViewController;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXExtendedTraitCollection.h"
#import "PXFeedConfiguration.h"

@interface PXFeedViewConfiguration : NSObject <NSCopying>



@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection
@property (readonly, nonatomic) PXFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFeedConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 ;


@end


#endif