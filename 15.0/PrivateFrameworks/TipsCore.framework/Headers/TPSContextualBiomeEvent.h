// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCONTEXTUALBIOMEEVENT_H
#define TPSCONTEXTUALBIOMEEVENT_H

@class NSDictionary, NSString;


#import "TPSContextualEvent.h"

@interface TPSContextualBiomeEvent : TPSContextualEvent

@property (readonly, copy, nonatomic) id *filterHandler;
@property (copy, nonatomic) NSDictionary *filterInfo; // ivar: _filterInfo
@property (copy, nonatomic) NSString *stream; // ivar: _stream


+(BOOL)supportsSecureCoding;
+(id)observationDateFromEvent:(id)arg0 ;
+(id)streamFromDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)publisherFromStartTime:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif