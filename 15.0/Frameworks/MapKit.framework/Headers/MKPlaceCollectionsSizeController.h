// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECOLLECTIONSSIZECONTROLLER_H
#define MKPLACECOLLECTIONSSIZECONTROLLER_H

@class NSString;
@protocol MKCollectionsSizeProvider;

#import <Foundation/Foundation.h>


@interface MKPlaceCollectionsSizeController : NSObject <MKCollectionsSizeProvider>



@property (nonatomic) ? collectionsConfiguration; // ivar: _collectionsConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultCollectionHeight; // ivar: _defaultCollectionHeight
@property (nonatomic) CGFloat defaultCollectionWidth; // ivar: _defaultCollectionWidth
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isMarzipan; // ivar: _isMarzipan
@property (nonatomic) BOOL isSingleCollection; // ivar: _isSingleCollection
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (readonly) Class superclass;


-(CGFloat)minimumInterItemSpacing;
-(id)initWithCollectionsConfiguration:(struct ? )arg0 isSingleCollection:(BOOL)arg1 usingTraitCollections:(id)arg2 inContext:(NSInteger)arg3 ;
-(id)initWithDefaultCollectionsConfigurationUsingTraitCollections:(id)arg0 inContext:(NSInteger)arg1 ;
-(struct CGSize )sizeForCollectionWithMaxCollectionsWidth:(CGFloat)arg0 ;


@end


#endif