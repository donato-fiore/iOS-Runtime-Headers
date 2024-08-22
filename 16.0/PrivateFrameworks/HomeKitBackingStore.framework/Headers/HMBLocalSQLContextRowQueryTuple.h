// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBLOCALSQLCONTEXTROWQUERYTUPLE_H
#define HMBLOCALSQLCONTEXTROWQUERYTUPLE_H

@class HMFObject, NSData;



@interface HMBLocalSQLContextRowQueryTuple : HMFObject

@property (readonly, nonatomic) NSData *queryData; // ivar: _queryData
@property (readonly, nonatomic) NSUInteger queryRow; // ivar: _queryRow


-(id)initWithQueryRow:(NSUInteger)arg0 data:(id)arg1 ;


@end


#endif