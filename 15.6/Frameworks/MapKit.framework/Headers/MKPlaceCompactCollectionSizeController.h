// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECOMPACTCOLLECTIONSIZECONTROLLER_H
#define MKPLACECOMPACTCOLLECTIONSIZECONTROLLER_H

@class NSString;
@protocol MKCompactCollectionsSizeProvider;

#import <Foundation/Foundation.h>


@interface MKPlaceCompactCollectionSizeController : NSObject <MKCompactCollectionsSizeProvider>



@property (nonatomic) ? configuration; // ivar: _configuration
@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultCompactCollectionHeight; // ivar: _defaultCompactCollectionHeight
@property (nonatomic) CGFloat defaultCompactCollectionWidth; // ivar: _defaultCompactCollectionWidth
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (readonly) Class superclass;


-(CGFloat)minimumInterItemSpacing;
-(id)initWithCollectionsConfiguration:(struct ? )arg0 usingTraitCollections:(id)arg1 inContext:(NSInteger)arg2 ;
-(id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg0 inContext:(NSInteger)arg1 ;
-(struct CGSize )sizeForCollectionWithMaxCollectionsWidth:(CGFloat)arg0 ;


@end


#endif