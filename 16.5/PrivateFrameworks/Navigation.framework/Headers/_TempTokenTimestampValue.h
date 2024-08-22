// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TEMPTOKENTIMESTAMPVALUE_H
#define _TEMPTOKENTIMESTAMPVALUE_H

@class NSString, NSTimeZone;
@protocol GEOServerFormatTokenTimeStampValue;

#import <Foundation/Foundation.h>


@interface _TempTokenTimestampValue : NSObject <GEOServerFormatTokenTimeStampValue>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *formatPattern; // ivar: _formatPattern
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif