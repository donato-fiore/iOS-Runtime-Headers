// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPLAYBUTTONCONFIGURATION_H
#define PXSTORYPLAYBUTTONCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXStoryPlayButtonSpec.h"
#import "PXStoryViewModel.h"

@interface PXStoryPlayButtonConfiguration : NSObject <PXGViewUserData>



@property (nonatomic) SEL action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryPlayButtonSpec *spec; // ivar: _spec
@property (readonly) Class superclass;
@property (weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) PXStoryViewModel *viewModel; // ivar: _viewModel


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithViewModel:(id)arg0 ;


@end


#endif