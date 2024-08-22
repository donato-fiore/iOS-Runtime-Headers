// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TIMESTAMPVALUE_H
#define _TIMESTAMPVALUE_H

@class NSTimeZone, NSString;
@protocol GEOServerFormatTokenTimeStampValue;

#import <Foundation/Foundation.h>


@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue>

 {
    CGFloat _timeStamp;
    NSTimeZone *_timeZone;
    NSString *_formatPattern;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formatPattern;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeStamp;
@property (readonly, nonatomic) NSTimeZone *timeZone;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeStamp:(CGFloat)arg0 timeZone:(id)arg1 formatPattern:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif