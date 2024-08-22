// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAFARICLEARBROWSINGDATACONTROLLER_H
#define SAFARICLEARBROWSINGDATACONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SafariClearBrowsingDataController : NSObject

@property (readonly) NSArray *availableIntervals; // ivar: _availableIntervals


-(id)init;
-(void)_clearBrowsingDataAddedAfterDate:(id)arg0 ;
-(void)clearAllBrowsingData;
-(void)clearDataFromInterval:(id)arg0 ;


@end


#endif