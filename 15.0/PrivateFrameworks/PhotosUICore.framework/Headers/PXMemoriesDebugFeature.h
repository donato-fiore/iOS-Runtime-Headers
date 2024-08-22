// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESDEBUGFEATURE_H
#define PXMEMORIESDEBUGFEATURE_H

@class NSString, NSArray, UIColor;
@protocol PXProtoFeature;

#import <Foundation/Foundation.h>


@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger featureGroupIndex;
@property (readonly, nonatomic) NSInteger featureKind;
@property (readonly, nonatomic) NSString *featureLocalizedTitle; // ivar: _featureLocalizedTitle
@property (readonly, nonatomic) NSArray *featurePeople;
@property (readonly, nonatomic) CGFloat featureScore;
@property (readonly, nonatomic) UIColor *featureSelectedTintColor;
@property (readonly, nonatomic) UIColor *featureTintColor; // ivar: _featureTintColor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSString *localizedTypeStringValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)_tintColorForFeatureType:(NSUInteger)arg0 ;
-(id)initWithLocalizedTitle:(id)arg0 type:(NSUInteger)arg1 ;


@end


#endif