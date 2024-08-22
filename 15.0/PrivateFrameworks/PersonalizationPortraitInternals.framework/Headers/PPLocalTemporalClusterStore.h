// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLOCALTEMPORALCLUSTERSTORE_H
#define PPLOCALTEMPORALCLUSTERSTORE_H


#import <Foundation/Foundation.h>

#import "PPTemporalClusterStorage.h"

@interface PPLocalTemporalClusterStore : NSObject {
    PPTemporalClusterStorage *_storage;
}




+(id)defaultStore;
-(id)init;
-(id)initWithStorage:(id)arg0 ;
-(id)rankedTemporalClusterForStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;


@end


#endif