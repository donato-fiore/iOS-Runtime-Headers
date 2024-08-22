// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCALENDAREVENTFEATURIZER_H
#define ATXCALENDAREVENTFEATURIZER_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "ATXFreeMomentDataSource.h"

@interface ATXCalendarEventFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
    NSDate *_currentTime;
}




-(id)initWithFreeMomentDataSource:(id)arg0 ;
-(id)initWithFreeMomentDataSource:(id)arg0 currentTime:(id)arg1 ;
-(void)updateFeatureVectorWithCalendarEvents:(id)arg0 ;


@end


#endif