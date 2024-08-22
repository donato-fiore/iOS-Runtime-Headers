// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCSIMPLEHOURENTRYMODEL_H
#define NWCSIMPLEHOURENTRYMODEL_H

@class NSString, NSTimeZone;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NWCSimpleHourEntryModel : NSObject <NSSecureCoding>



@property (readonly) NSString *bottomString; // ivar: _bottomString
@property (readonly) BOOL isDay; // ivar: _isDay
@property (readonly) NSString *middleString; // ivar: _middleString
@property (readonly) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly) NSString *topString; // ivar: _topString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopString:(id)arg0 middleString:(id)arg1 bottomString:(id)arg2 isDay:(BOOL)arg3 timeZone:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif