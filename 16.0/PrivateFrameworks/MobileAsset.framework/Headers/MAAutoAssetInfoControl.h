// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAAUTOASSETINFOCONTROL_H
#define MAAUTOASSETINFOCONTROL_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetInfoControl : NSObject <NSSecureCoding>



@property (readonly, nonatomic) int cacheDeleteUrgency; // ivar: _cacheDeleteUrgency
@property (readonly, nonatomic) BOOL clearingAfter; // ivar: _clearingAfter
@property (readonly, nonatomic) BOOL forceUnlock; // ivar: _forceUnlock
@property (readonly, retain, nonatomic) NSArray *limitedToAssetTypes; // ivar: _limitedToAssetTypes
@property (readonly, nonatomic) NSInteger simulateEnd; // ivar: _simulateEnd
@property (readonly, nonatomic) NSInteger simulateOperation; // ivar: _simulateOperation
@property (readonly, nonatomic) NSInteger targetingPurgeAmount; // ivar: _targetingPurgeAmount
@property (readonly, nonatomic) NSString *volumeToReclaim; // ivar: _volumeToReclaim


+(BOOL)supportsSecureCoding;
+(id)nameOfSimulateEnd:(NSInteger)arg0 ;
+(id)nameOfSimulateOperation:(NSInteger)arg0 ;
-(id)description;
-(id)initClearingAfter:(BOOL)arg0 ;
-(id)initClearingAfter:(BOOL)arg0 forcingUnlock:(BOOL)arg1 limitedToAssetTypes:(id)arg2 withVolumeToReclaim:(id)arg3 withUrgency:(int)arg4 targetingPurgeAmount:(NSInteger)arg5 simulateOperation:(NSInteger)arg6 simulateEnd:(NSInteger)arg7 ;
-(id)initClearingAfter:(BOOL)arg0 limitedToAssetTypes:(id)arg1 ;
-(id)initForSimulateOperation:(NSInteger)arg0 withSimulateEnd:(NSInteger)arg1 ;
-(id)initForcingUnlock:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVolumeToReclaim:(id)arg0 withUrgency:(int)arg1 targetingPurgeAmount:(NSInteger)arg2 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif