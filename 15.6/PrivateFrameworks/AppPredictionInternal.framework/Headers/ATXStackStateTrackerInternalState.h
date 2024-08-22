// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTACKSTATETRACKERINTERNALSTATE_H
#define ATXSTACKSTATETRACKERINTERNALSTATE_H

@class NSMutableArray, ATXBMBookmark, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXStackStateTrackerInternalState : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableArray *blendingCacheUpdateUUIDs; // ivar: _blendingCacheUpdateUUIDs
@property (retain, nonatomic) ATXBMBookmark *bookmark; // ivar: _bookmark
@property (retain, nonatomic) NSMutableDictionary *cachedStackLayoutsByBlendingUpdateUUID; // ivar: _cachedStackLayoutsByBlendingUpdateUUID
@property (retain, nonatomic) NSMutableDictionary *lastThreeUserVisitDatesOfPages; // ivar: _lastThreeUserVisitDatesOfPages
@property (retain, nonatomic) NSMutableDictionary *stackStateByStackId; // ivar: _stackStateByStackId


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateLastThreeUserVisitDatesIfNecessaryForPage:(id)arg0 date:(id)arg1 ;


@end


#endif