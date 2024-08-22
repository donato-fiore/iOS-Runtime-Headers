// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYVIEWCONFIGURATION_H
#define PXSTORYVIEWCONFIGURATION_H

@class UIViewController;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXStoryConfiguration.h"
#import "PXExtendedTraitCollection.h"

@interface PXStoryViewConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) PXStoryConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // ivar: _extendedTraitCollection


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 extendedTraitCollection:(id)arg1 ;


@end


#endif