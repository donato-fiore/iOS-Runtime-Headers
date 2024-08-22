// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLNETWORKUSAGESNAPSHOT_H
#define PLNETWORKUSAGESNAPSHOT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface PLNetworkUsageSnapshot : NSObject

@property (retain) NSString *cellType; // ivar: _cellType
@property (retain) NSString *quality; // ivar: _quality
@property (retain) NSDate *timestamp; // ivar: _timestamp
@property (retain) NSString *wifi; // ivar: _wifi


-(CGFloat)computeEnergyDiff:(id)arg0 ;
-(CGFloat)computeEnergyDiffUntilNow:(BOOL)arg0 ;
-(id)description;
-(id)initWithInfo:(id)arg0 ;
-(void)snapshotNetworkState;


@end


#endif