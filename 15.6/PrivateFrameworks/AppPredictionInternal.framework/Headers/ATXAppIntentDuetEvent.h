// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPINTENTDUETEVENT_H
#define ATXAPPINTENTDUETEVENT_H

@class NSString, NSNumber, NSArray;
@protocol NSSecureCoding;


#import "ATXDuetEvent.h"

@interface ATXAppIntentDuetEvent : ATXDuetEvent <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) NSNumber *alogId; // ivar: _alogId
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) NSNumber *paramCount; // ivar: _paramCount
@property (readonly, nonatomic) NSArray *parameterHashes; // ivar: _parameterHashes
@property (readonly, nonatomic) NSArray *slotSetHashes; // ivar: _slotSetHashes


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)identifier;
-(id)initWithBundleId:(id)arg0 actionType:(id)arg1 parameterHashes:(id)arg2 slotSetHashes:(id)arg3 paramCount:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 ;
-(id)initWithBundleId:(id)arg0 actionType:(id)arg1 parameterHashes:(id)arg2 slotSetHashes:(id)arg3 paramCount:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 alogId:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif