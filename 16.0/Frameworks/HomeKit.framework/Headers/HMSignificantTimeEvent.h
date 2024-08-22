// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSIGNIFICANTTIMEEVENT_H
#define HMSIGNIFICANTTIMEEVENT_H

@class NSDateComponents, NSString;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMTimeEvent.h"

@interface HMSignificantTimeEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSDateComponents *offset; // ivar: _offset
@property (retain, nonatomic) NSString *significantEvent; // ivar: _significantEvent


+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 significantEvent:(id)arg1 offset:(id)arg2 ;
-(id)initWithSignificantEvent:(id)arg0 offset:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateOffset:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateSignificantEvent:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif