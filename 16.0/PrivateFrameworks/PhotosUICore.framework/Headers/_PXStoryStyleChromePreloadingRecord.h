// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYSTYLECHROMEPRELOADINGRECORD_H
#define _PXSTORYSTYLECHROMEPRELOADINGRECORD_H

@protocol PXStoryStyleDescriptor, PXStoryViewLayoutSpec;

#import <Foundation/Foundation.h>


@interface _PXStoryStyleChromePreloadingRecord : NSObject

@property (readonly, nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (readonly, nonatomic) NSObject<PXStoryStyleDescriptor> *styleInfo; // ivar: _styleInfo
@property (readonly, nonatomic) NSObject<PXStoryViewLayoutSpec> *viewLayoutSpec; // ivar: _viewLayoutSpec


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithScreenScale:(CGFloat)arg0 styleInfo:(id)arg1 viewLayoutSpec:(id)arg2 ;


@end


#endif