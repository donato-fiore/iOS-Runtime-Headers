// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPHONEUNLOCKFEATURIZER_H
#define ATXPHONEUNLOCKFEATURIZER_H


#import <Foundation/Foundation.h>

#import "ATXFreeMomentDataSource.h"

@interface ATXPhoneUnlockFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
}




-(id)initWithFreeMomentDataSource:(id)arg0 ;
-(void)updateFeatureVectorWithPhoneUnlockEvents:(id)arg0 ;


@end


#endif