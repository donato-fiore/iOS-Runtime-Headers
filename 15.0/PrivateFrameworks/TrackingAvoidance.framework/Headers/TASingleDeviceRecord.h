// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TASINGLEDEVICERECORD_H
#define TASINGLEDEVICERECORD_H

@class NSData, NSDate, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *address; // ivar: _address
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) BOOL hasSurfacedNotification; // ivar: _hasSurfacedNotification
@property (nonatomic) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (retain, nonatomic) NSMutableArray *stagedDetectionResults; // ivar: _stagedDetectionResults
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldPushStagedDetection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)getDetectionsReadyToPush;
-(id)getStagedDetections;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceAddress:(id)arg0 state:(NSUInteger)arg1 type:(NSUInteger)arg2 date:(id)arg3 keepAliveInterval:(CGFloat)arg4 ;
-(void)clearAllStagedDetections;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceStagedDetectionsToSurfaceImmediately;
-(void)mergeWithAnotherSingleDeviceRecord:(id)arg0 ;
-(void)purgeStagedDetectionsWithClock:(id)arg0 ;
-(void)stageDetection:(id)arg0 ;
-(void)updateLatestAdvertisement:(id)arg0 ;


@end


#endif