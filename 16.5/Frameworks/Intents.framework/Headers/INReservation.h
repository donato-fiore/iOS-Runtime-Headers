// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESERVATION_H
#define INRESERVATION_H

@class NSURL, NSArray, NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"
#import "INSpeakableString.h"

@interface INReservation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) INDateComponentsRange *_duration; // ivar: __duration
@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSDate *bookingTime; // ivar: _bookingTime
@property (readonly, copy, nonatomic) INSpeakableString *itemReference; // ivar: _itemReference
@property (readonly, copy, nonatomic) NSString *reservationHolderName; // ivar: _reservationHolderName
@property (readonly, copy, nonatomic) NSString *reservationNumber; // ivar: _reservationNumber
@property (readonly, nonatomic) NSInteger reservationStatus; // ivar: _reservationStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 ;
-(id)initWithItemReference:(id)arg0 reservationNumber:(id)arg1 bookingTime:(id)arg2 reservationStatus:(NSInteger)arg3 reservationHolderName:(id)arg4 actions:(id)arg5 URL:(id)arg6 ;
-(id)url;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif