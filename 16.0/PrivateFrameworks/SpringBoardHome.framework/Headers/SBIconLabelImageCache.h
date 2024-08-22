// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICONLABELIMAGECACHE_H
#define SBICONLABELIMAGECACHE_H

@class NSMutableDictionary, CPMemoryPool, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIconLabelImageCache : NSObject <BSDescriptionProviding>

 {
    NSMutableDictionary *_labelImages;
}


@property (readonly, nonatomic) CPMemoryPool *colorPool; // ivar: _colorPool
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPMemoryPool *grayPool; // ivar: _grayPool
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize maxLabelSize; // ivar: _maxLabelSize
@property (readonly, nonatomic) NSUInteger numberOfCacheHits;
@property (readonly, nonatomic) NSUInteger numberOfCacheMisses;
@property (readonly, nonatomic) NSUInteger numberOfCachedImages;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)cachedLabelImageForParameters:(id)arg0 ;
-(id)cachedLabelImagesWithParametersPassingTest:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)generateAndStoreLabelImageForParameters:(id)arg0 ;
-(id)initWithMaxLabelSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)labelImageForParameters:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)cacheLabelImageForParameters:(id)arg0 ;
-(void)removeLabelImageForParameters:(id)arg0 ;
-(void)removeLabelImagesWithParametersPassingTest:(id)arg0 ;


@end


#endif