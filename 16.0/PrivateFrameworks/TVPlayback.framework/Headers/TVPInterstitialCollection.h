// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVPINTERSTITIALCOLLECTION_H
#define TVPINTERSTITIALCOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TVPInterstitialCollection : NSObject

@property (retain, nonatomic) id *backingData; // ivar: _backingData
@property (retain, nonatomic) NSArray *interstitials; // ivar: _interstitials
@property (retain, nonatomic) NSArray *interstitialsWithAdjacentsMerged; // ivar: _interstitialsWithAdjacentsMerged


-(CGFloat)timeAdjustedByIncludingInterstitials:(CGFloat)arg0 ;
-(CGFloat)timeAdjustedByRemovingInterstitials:(CGFloat)arg0 ;
-(id)initWithInterstitials:(id)arg0 ;
-(id)interstitialForTime:(CGFloat)arg0 ;
-(id)mergedInterstitialForTime:(CGFloat)arg0 ;


@end


#endif