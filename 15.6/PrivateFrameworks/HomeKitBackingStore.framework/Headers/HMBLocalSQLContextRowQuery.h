// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALSQLCONTEXTROWQUERY_H
#define HMBLOCALSQLCONTEXTROWQUERY_H

@class HMFObject, NSDictionary;



@interface HMBLocalSQLContextRowQuery : HMFObject

@property (readonly, nonatomic) NSUInteger recordRow; // ivar: _recordRow
@property (readonly, nonatomic) NSDictionary *tuples; // ivar: _tuples


-(id)initWithRecordRow:(NSUInteger)arg0 tuples:(id)arg1 ;


@end


#endif