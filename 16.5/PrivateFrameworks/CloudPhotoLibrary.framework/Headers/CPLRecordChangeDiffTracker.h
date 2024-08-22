// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLRECORDCHANGEDIFFTRACKER_H
#define CPLRECORDCHANGEDIFFTRACKER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CPLDiffTracker.h"

@interface CPLRecordChangeDiffTracker : NSObject {
    CPLDiffTracker *_diffTracker;
    NSUInteger _trackingChangeType;
}


@property (readonly, nonatomic) NSArray *updatedProperties;


-(BOOL)areObjectsDifferentOnProperty:(id)arg0 changeType:(NSUInteger)arg1 ;
-(id)description;
-(id)init;
-(id)initWithTrackingChangeTypeMask:(NSUInteger)arg0 ;
-(id)redactedDescription;
-(void)withTrackerForChangeType:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif