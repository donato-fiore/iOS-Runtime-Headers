// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNIOSABDEPENDENTPROPERTIESUPDATECONTEXT_H
#define CNIOSABDEPENDENTPROPERTIESUPDATECONTEXT_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CNiOSABDependentPropertiesUpdateContext : NSObject

@property (nonatomic) BOOL hasPendingCropRect; // ivar: _hasPendingCropRect
@property (nonatomic) BOOL hasPendingImageData; // ivar: _hasPendingImageData
@property (nonatomic) BOOL hasPendingSyncImageData; // ivar: _hasPendingSyncImageData
@property (nonatomic) BOOL hasPendingThumbnailImageData; // ivar: _hasPendingThumbnailImageData
@property (nonatomic) CGRect pendingCropRect; // ivar: _pendingCropRect
@property (copy, nonatomic) NSData *pendingFullscreenImageData; // ivar: _pendingFullscreenImageData
@property (copy, nonatomic) NSData *pendingImageData; // ivar: _pendingImageData
@property (copy, nonatomic) NSData *pendingSyncImageData; // ivar: _pendingSyncImageData
@property (copy, nonatomic) NSData *pendingThumbnailImageData; // ivar: _pendingThumbnailImageData


+(BOOL)shouldSetWatchChanges;
+(id)os_log;
-(?)logIfConditionFailed:(?)arg0 messageerror;
-(BOOL)flushPendingImageChangesToPerson:(*void)arg0 logger:(id)arg1 error:(*id)arg2 ;
-(BOOL)setWatchChangesforThumbnailImageDataToPerson:(*void)arg0 error:(*id)arg1 ;
-(void)resetAllData;


@end


#endif