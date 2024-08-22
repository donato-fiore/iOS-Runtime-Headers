// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFITEMPROVIDERUTILITIES_H
#define HFITEMPROVIDERUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFItemProviderUtilities : NSObject



+(id)_servicesForHome:(id)arg0 canShowInControlCentre:(BOOL)arg1 withLimit:(NSUInteger)arg2 includes:(NSUInteger)arg3 ;
+(id)favoriteActionSetsForHome:(id)arg0 withLimit:(NSUInteger)arg1 ;
+(id)favoriteServicesForHome:(id)arg0 withLimit:(NSUInteger)arg1 ;
+(id)nonFavoriteServicesForHome:(id)arg0 withLimit:(NSUInteger)arg1 ;
+(id)predictionsPaddingFavoriteServicesForHome:(id)arg0 withLimit:(NSUInteger)arg1 ;
+(id)predictionsPaddingNonFavoriteServicesForHome:(id)arg0 withLimit:(NSUInteger)arg1 ;


@end


#endif