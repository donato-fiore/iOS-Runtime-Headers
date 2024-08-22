// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPROGRESSTRACKER_H
#define CKDPROGRESSTRACKER_H

@class NSMapTable, NSString;

#import <Foundation/Foundation.h>


@interface CKDProgressTracker : NSObject

@property (nonatomic) NSUInteger cachedCompletedBytes; // ivar: _cachedCompletedBytes
@property (nonatomic) NSUInteger cachedTotalBytes; // ivar: _cachedTotalBytes
@property (retain, nonatomic) NSMapTable *completedBytesByItems; // ivar: _completedBytesByItems
@property (nonatomic) BOOL hasCachedCompletedBytes; // ivar: _hasCachedCompletedBytes
@property (nonatomic) BOOL hasCachedTotalBytes; // ivar: _hasCachedTotalBytes
@property (nonatomic) CGFloat lastItemPercentage; // ivar: _lastItemPercentage
@property (retain, nonatomic) NSString *trackingID; // ivar: _trackingID


+(NSUInteger)_sizeForItem:(id)arg0 ;
-(CGFloat)updateProgressWithItem:(id)arg0 progress:(CGFloat)arg1 ;
-(NSUInteger)_updateTotalBytes;
-(NSUInteger)_updateTotalCompletedBytes;
-(id)init;
-(id)initWithTrackingID:(id)arg0 ;
-(void)startTrackingItems:(id)arg0 ;
-(void)stopTrackingItems:(id)arg0 ;


@end


#endif