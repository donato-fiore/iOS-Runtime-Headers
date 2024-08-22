// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPLAYBACKRATECOLLECTION_H
#define AVPLAYBACKRATECOLLECTION_H

@class NSArray;
@protocol AVPlaybackRateCollectionDelegate;

#import <Foundation/Foundation.h>

#import "AVPlaybackRate.h"

@interface AVPlaybackRateCollection : NSObject {
    id<AVPlaybackRateCollectionDelegate> *_delegate;
    NSArray *_rates;
}


@property (readonly, nonatomic) NSArray *rates;
@property (readonly, nonatomic) AVPlaybackRate *selectedRate; // ivar: _selectedRate


+(id)collectionWithDefaultRates;
+(id)collectionWithRates:(id)arg0 ;
-(id)_initInternalWithRates:(id)arg0 ;
-(id)debugDescription;
-(id)delegate;
-(id)description;
-(void)selectNextPlaybackRate:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif