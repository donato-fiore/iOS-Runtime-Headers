// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMPORTTIMER_H
#define PHIMPORTTIMER_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PHImportTimer : NSObject

@property (retain) NSDate *endTime; // ivar: _endTime
@property NSUInteger signpostId; // ivar: _signpostId
@property (retain) NSDate *startTime; // ivar: _startTime
@property unsigned char subtype; // ivar: _subtype
@property unsigned char type; // ivar: _type
@property (retain) id *uuid; // ivar: _uuid


-(CGFloat)duration;
-(id)description;
-(id)initWithType:(unsigned char)arg0 subtype:(unsigned char)arg1 ;
-(void)start;
-(void)stop;


@end


#endif