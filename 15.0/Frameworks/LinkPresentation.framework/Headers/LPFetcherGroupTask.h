// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPFETCHERGROUPTASK_H
#define LPFETCHERGROUPTASK_H


#import <Foundation/Foundation.h>

#import "LPFetcher.h"
#import "LPFetcherResponse.h"

@interface LPFetcherGroupTask : NSObject

@property (retain, nonatomic) LPFetcher *fetcher; // ivar: _fetcher
@property (nonatomic) BOOL hasStarted; // ivar: _hasStarted
@property (retain, nonatomic) LPFetcherResponse *response; // ivar: _response




@end


#endif