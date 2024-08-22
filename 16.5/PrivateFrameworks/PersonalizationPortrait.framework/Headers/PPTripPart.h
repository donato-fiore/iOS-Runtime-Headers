// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTRIPPART_H
#define PPTRIPPART_H

@class NSDate, NSString, NSArray, CLPlacemark;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTripPart : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *endLocation; // ivar: _endLocation
@property (readonly, nonatomic) NSArray *eventIdentifiers; // ivar: _eventIdentifiers
@property (retain, nonatomic) NSString *fallbackLocationString; // ivar: _fallbackLocationString
@property (retain, nonatomic) CLPlacemark *mainLocation; // ivar: _mainLocation
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *startLocation; // ivar: _startLocation
@property (readonly, nonatomic) unsigned char tripMode; // ivar: _tripMode


+(BOOL)supportsSecureCoding;
+(id)descriptionForTripMode:(unsigned char)arg0 ;
-(id)description;
-(id)destinationString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 eventIdentifiers:(id)arg2 mode:(unsigned char)arg3 location:(id)arg4 fallbackLocationString:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif