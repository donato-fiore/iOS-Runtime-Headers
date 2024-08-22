// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKGREENFIELDANALYTICSMODEL_H
#define NTKGREENFIELDANALYTICSMODEL_H

@class NSString, NSDictionary, NSError, NSSet;

#import <Foundation/Foundation.h>

#import "NTKFace.h"

@interface NTKGreenfieldAnalyticsModel : NSObject

@property (copy, nonatomic) NSString *addFaceFlowExitScreenName; // ivar: _addFaceFlowExitScreenName
@property (copy, nonatomic) NSDictionary *complicationSlotToIdMapping; // ivar: _complicationSlotToIdMapping
@property (copy, nonatomic) NSString *distributionMechanism; // ivar: _distributionMechanism
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (copy, nonatomic) NSSet *purchasedComplicationsItemIds; // ivar: _purchasedComplicationsItemIds
@property (copy, nonatomic) NSString *scannedCodeIdentifier; // ivar: _scannedCodeIdentifier
@property (copy, nonatomic) NSSet *skippedComplicationsItemIds; // ivar: _skippedComplicationsItemIds
@property (copy, nonatomic) NTKFace *watchFace; // ivar: _watchFace




@end


#endif