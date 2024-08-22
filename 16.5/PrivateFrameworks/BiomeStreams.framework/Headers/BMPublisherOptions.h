// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPUBLISHEROPTIONS_H
#define BMPUBLISHEROPTIONS_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BMPublisherOptions : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger lastN; // ivar: _lastN
@property (readonly, nonatomic) NSUInteger maxEvents; // ivar: _maxEvents
@property (readonly, nonatomic) BOOL reversed; // ivar: _reversed
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 maxEvents:(NSUInteger)arg2 lastN:(NSUInteger)arg3 reversed:(BOOL)arg4 ;


@end


#endif