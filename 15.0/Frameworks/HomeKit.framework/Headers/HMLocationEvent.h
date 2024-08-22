// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMLOCATIONEVENT_H
#define HMLOCATIONEVENT_H

@class HMFLocationAuthorization, CLRegion;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMEvent.h"

@interface HMLocationEvent : HMEvent <NSSecureCoding, NSCopying, NSMutableCopying>



@property (readonly) HMFLocationAuthorization *authorization; // ivar: _authorization
@property (nonatomic) NSInteger locationAuthorization; // ivar: _locationAuthorization
@property (retain, nonatomic) CLRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 region:(id)arg1 ;
-(id)initWithRegion:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)__configureWithContext:(id)arg0 eventTrigger:(id)arg1 ;
-(void)__locationAuthorizationUpdated:(id)arg0 ;
-(void)_handleEventUpdatedNotification:(id)arg0 ;
-(void)_retrieveLocationEvent;
-(void)_unconfigure;
-(void)_updateRegion:(id)arg0 completionHandler:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateRegion:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif