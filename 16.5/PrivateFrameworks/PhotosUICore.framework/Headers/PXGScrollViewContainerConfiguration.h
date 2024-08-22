// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGSCROLLVIEWCONTAINERCONFIGURATION_H
#define PXGSCROLLVIEWCONTAINERCONFIGURATION_H

@class NSString;
@protocol PXGViewUserData, PXGScrollViewContainerDelegate;

#import <Foundation/Foundation.h>

#import "PXGScrollViewModel.h"

@interface PXGScrollViewContainerConfiguration : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGScrollViewContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXGScrollViewModel *scrollViewModel; // ivar: _scrollViewModel
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif