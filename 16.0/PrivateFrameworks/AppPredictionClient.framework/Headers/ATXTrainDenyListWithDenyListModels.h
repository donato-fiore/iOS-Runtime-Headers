// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXTRAINDENYLISTWITHDENYLISTMODELS_H
#define ATXTRAINDENYLISTWITHDENYLISTMODELS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "ATXModeEntityTrialClientWrapper.h"

@interface ATXTrainDenyListWithDenyListModels : NSObject {
    NSDictionary *_trainDenyListWithDenyListModels;
    ATXModeEntityTrialClientWrapper *_modeEntityTrialClientWrapper;
}




-(BOOL)trainAppDenyListWithDenyListModel;
-(BOOL)trainContactDenyListWithDenyListModel;
-(id)init;


@end


#endif