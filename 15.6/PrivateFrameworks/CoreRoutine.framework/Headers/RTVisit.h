// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTVISIT_H
#define RTVISIT_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "RTLocation.h"
#import "RTPlaceInference.h"

@interface RTVisit : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSInteger dataPointCount; // ivar: _dataPointCount
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSDate *entry; // ivar: _entry
@property (readonly, copy, nonatomic) NSDate *exit; // ivar: _exit
@property (readonly, copy, nonatomic) RTLocation *location; // ivar: _location
@property (retain, nonatomic) RTPlaceInference *placeInference; // ivar: _placeInference
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)visitIncidentTypeFromString:(id)arg0 ;
+(id)stringFromVisitIncidentType:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToVisit:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 type:(NSInteger)arg1 location:(id)arg2 entry:(id)arg3 exit:(id)arg4 dataPointCount:(NSInteger)arg5 confidence:(CGFloat)arg6 placeInference:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif