// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGENTITYSTORETOFEATURESTORELOCKGUARDEDDATA_H
#define SGENTITYSTORETOFEATURESTORELOCKGUARDEDDATA_H


#import <Foundation/Foundation.h>

#import "SGMIFeatureStore.h"

@interface SGEntityStoreToFeatureStoreLockGuardedData : NSObject {
    SGMIFeatureStore *_sgmiFeatureStore;
}




-(id)sgmiFeatureStore;
-(void)setSgmiFeatureStore:(id)arg0 ;


@end


#endif