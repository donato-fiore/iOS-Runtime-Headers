// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENEXPOSUREDETECTIONHISTORYCHECK_H
#define ENEXPOSUREDETECTIONHISTORYCHECK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ENExposureDetectionHistorySession.h"

@interface ENExposureDetectionHistoryCheck : NSObject

@property (copy, nonatomic) NSArray *files; // ivar: _files
@property (retain, nonatomic) ENExposureDetectionHistorySession *session; // ivar: _session


-(id)init;


@end


#endif