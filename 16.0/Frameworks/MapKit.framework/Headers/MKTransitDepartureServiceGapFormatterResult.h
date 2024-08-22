// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKTRANSITDEPARTURESERVICEGAPFORMATTERRESULT_H
#define MKTRANSITDEPARTURESERVICEGAPFORMATTERRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKTransitDepartureServiceGapFormatterResult : NSObject

@property (readonly, copy, nonatomic) NSString *dateDescription; // ivar: _dateDescription
@property (readonly, nonatomic) NSUInteger dateFormat; // ivar: _dateFormat
@property (readonly, copy, nonatomic) NSString *format; // ivar: _format
@property (readonly, nonatomic) NSString *formattedString;


-(id)initWithFormat:(id)arg0 dateDescription:(id)arg1 dateFormat:(NSUInteger)arg2 ;


@end


#endif