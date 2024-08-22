// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCALENDAREVENT_H
#define HMCALENDAREVENT_H

@class NSDateComponents;
@protocol NSSecureCoding, NSCopying, NSMutableCopying;


#import "HMTimeEvent.h"

@interface HMCalendarEvent : HMTimeEvent <NSSecureCoding, NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSDateComponents *fireDateComponents; // ivar: _fireDateComponents


+(BOOL)supportsSecureCoding;
+(id)createWithDictionary:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)_serializeForAdd;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDict:(id)arg0 fireDateComponents:(id)arg1 ;
-(id)initWithFireDateComponents:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_updateFromDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFireDateComponents:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif