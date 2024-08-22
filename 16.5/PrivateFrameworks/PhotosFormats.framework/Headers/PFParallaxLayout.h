// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFPARALLAXLAYOUT_H
#define PFPARALLAXLAYOUT_H

@class NSString, NSArray;
@protocol PFParallaxLayoutConfiguration;

#import <Foundation/Foundation.h>


@interface PFParallaxLayout : NSObject

@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) NSUInteger clockIntersection; // ivar: _clockIntersection
@property (readonly, nonatomic) NSString *clockLayerOrder; // ivar: _clockLayerOrder
@property (readonly, nonatomic) NSObject<PFParallaxLayoutConfiguration> *configuration;
@property (readonly, copy, nonatomic) NSArray *debugLayouts; // ivar: _debugLayouts
@property (readonly, nonatomic) CGSize deviceResolution; // ivar: _deviceResolution
@property (readonly, nonatomic) CGSize imageSize; // ivar: _imageSize
@property (readonly, nonatomic) CGRect inactiveFrame; // ivar: _inactiveFrame
@property (readonly, nonatomic) CGRect normalizedVisibleFrame;
@property (readonly, nonatomic) CGRect parallaxInactiveFrame;
@property (readonly, nonatomic) CGSize parallaxPadding; // ivar: _parallaxPadding
@property (readonly, nonatomic) CGRect parallaxVisibleFrame;
@property (readonly, nonatomic) CGRect timeFrame; // ivar: _timeFrame
@property (readonly, nonatomic) CGRect visibleFrame; // ivar: _visibleFrame


+(id)dictionaryWithLayout:(id)arg0 ;
+(id)layoutWithDictionary:(id)arg0 ;
-(id)debugDescription;
-(id)debugSwiftCode;
-(id)description;
-(id)initWithImageSize:(struct CGSize )arg0 deviceResolution:(struct CGSize )arg1 parallaxPadding:(struct CGSize )arg2 visibleFrame:(struct CGRect )arg3 inactiveFrame:(struct CGRect )arg4 timeFrame:(struct CGRect )arg5 clockLayerOrder:(id)arg6 clockIntersection:(NSUInteger)arg7 debugLayouts:(id)arg8 ;
-(id)layoutByUpdatingClockIntersection:(NSUInteger)arg0 ;
-(id)layoutByUpdatingClockLayerOrder:(id)arg0 ;
-(id)layoutByUpdatingConfiguration:(id)arg0 ;
-(id)layoutByUpdatingImageSize:(struct CGSize )arg0 ;
-(id)layoutByUpdatingInactiveFrame:(struct CGRect )arg0 ;
-(id)layoutByUpdatingNormalizedVisibleFrame:(struct CGRect )arg0 ;
-(id)layoutByUpdatingVisibleFrame:(struct CGRect )arg0 ;
-(id)layoutByUpgradingToConfiguration:(id)arg0 ;
-(struct CGRect )imageExtent;
-(struct CGRect )screenExtent;


@end


#endif