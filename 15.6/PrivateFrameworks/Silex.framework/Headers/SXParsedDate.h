// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPARSEDDATE_H
#define SXPARSEDDATE_H

@class NSDate, NSString, NSTimeZone;
@protocol SXParsedDate;

#import <Foundation/Foundation.h>


@interface SXParsedDate : NSObject <SXParsedDate>



@property (readonly, nonatomic) BOOL containedTime; // ivar: _containedTime
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithDate:(id)arg0 containedTime:(BOOL)arg1 timeZone:(id)arg2 ;


@end


#endif