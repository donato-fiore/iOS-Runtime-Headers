// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREJECTMEMORIESACTION_H
#define PXREJECTMEMORIESACTION_H

@class NSDictionary;


#import "PXMemoriesAction.h"

@interface PXRejectMemoriesAction : PXMemoriesAction

@property (nonatomic) NSUInteger featureType; // ivar: _featureType
@property (copy, nonatomic) NSDictionary *redoMemoryFeatures; // ivar: _redoMemoryFeatures
@property (copy, nonatomic) NSDictionary *redoPhotosGraphDataValues; // ivar: _redoPhotosGraphDataValues
@property (copy, nonatomic) NSDictionary *redoUserFeedbacks; // ivar: _redoUserFeedbacks
@property (nonatomic) NSUInteger rejectReason; // ivar: _rejectReason
@property (copy, nonatomic) NSDictionary *undoPhotosGraphDataValues; // ivar: _undoPhotosGraphDataValues
@property (copy, nonatomic) NSDictionary *undoUserFeedbacks; // ivar: _undoUserFeedbacks


-(id)actionIdentifier;
-(id)actionSystemImageName;
-(id)localizedActionName;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif