// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPAYWALLTOPOFFSETCONFIGURATION_H
#define FCPAYWALLTOPOFFSETCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface FCPaywallTopOffsetConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat compactLandscapeTopOffsetRatio; // ivar: _compactLandscapeTopOffsetRatio
@property (readonly, nonatomic) CGFloat compactPortraitTopOffsetRatio; // ivar: _compactPortraitTopOffsetRatio
@property (readonly, nonatomic) CGFloat regularLandscapeTopOffsetRatio; // ivar: _regularLandscapeTopOffsetRatio
@property (readonly, nonatomic) CGFloat regularPortraitTopOffsetRatio; // ivar: _regularPortraitTopOffsetRatio


-(id)init;
-(id)initWithCompactPortraitTopOffsetRatio:(CGFloat)arg0 compactLandscapeTopOffsetRatio:(CGFloat)arg1 regularPortraitTopOffsetRatio:(CGFloat)arg2 regularLandscapeTopOffsetRatio:(CGFloat)arg3 ;
-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif