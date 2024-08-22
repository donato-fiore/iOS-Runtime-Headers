// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIAPRESULT_H
#define FIAPRESULT_H

@class NSError, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FIAPResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSArray *historicalDataRequests; // ivar: _historicalDataRequests


+(BOOL)supportsSecureCoding;
+(id)new;
+(id)resultWithHistoricalDataRequests:(id)arg0 error:(id)arg1 ;
+(id)success;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHistoricalDataRequests:(id)arg0 error:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif