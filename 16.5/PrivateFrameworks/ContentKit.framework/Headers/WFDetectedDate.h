// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDETECTEDDATE_H
#define WFDETECTEDDATE_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFDetectedDate : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL timeIsSignificant; // ivar: _timeIsSignificant


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 timeIsSignificant:(BOOL)arg1 ;
-(id)initWithDateCheckingResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif