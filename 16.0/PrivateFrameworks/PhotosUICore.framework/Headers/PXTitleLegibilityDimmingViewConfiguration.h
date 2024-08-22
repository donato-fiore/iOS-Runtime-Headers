// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXTITLELEGIBILITYDIMMINGVIEWCONFIGURATION_H
#define PXTITLELEGIBILITYDIMMINGVIEWCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXTitleLegibilityDimmingViewConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *gradientImageName; // ivar: _gradientImageName
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGradientImageName:(id)arg0 ;
-(void)prepareForRender;


@end


#endif