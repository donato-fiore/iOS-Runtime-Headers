// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHTIMEANDPLACECONTROLLER_H
#define SHTIMEANDPLACECONTROLLER_H

@protocol SHDataFetcher;

#import <Foundation/Foundation.h>


@interface SHTimeAndPlaceController : NSObject

@property (readonly, nonatomic) NSObject<SHDataFetcher> *dataFetcher; // ivar: _dataFetcher


-(void)affinityGroupsFromData:(id)arg0 atLocation:(id)arg1 onDate:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif