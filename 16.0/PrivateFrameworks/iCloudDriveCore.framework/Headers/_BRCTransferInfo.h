// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BRCTRANSFERINFO_H
#define _BRCTRANSFERINFO_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "BRCProgress.h"

@interface _BRCTransferInfo : NSObject

@property (readonly, nonatomic) NSMutableDictionary *childProgresses; // ivar: _childProgresses
@property (readonly, nonatomic) NSMutableDictionary *previousUnitCounts; // ivar: _previousUnitCounts
@property (readonly, nonatomic) BRCProgress *progress; // ivar: _progress
@property (nonatomic) NSInteger sumOfCompletedUnitCountDelta; // ivar: sumOfCompletedUnitCountDelta
@property (nonatomic) NSInteger sumOfTotalUnitCountDelta; // ivar: sumOfTotalUnitCountDelta
@property (readonly, nonatomic) NSMutableDictionary *versionSizes; // ivar: _versionSizes


-(id)description;
-(id)init;
-(void)copyProgressInfoToProgress:(id)arg0 options:(char)arg1 ;
-(void)updateLocalizedDescriptionWithOptions:(char)arg0 ;
-(void)updateUnitCount;
-(void)verifyFutureProgressIsNotFinished;


@end


#endif