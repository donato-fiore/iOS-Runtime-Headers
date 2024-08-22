// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYTVINFOPANELVIEWCONFIGURATION_H
#define PXSTORYTVINFOPANELVIEWCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXStoryViewModel.h"

@interface PXStoryTVInfoPanelViewConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif