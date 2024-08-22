// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTHISTORYCHANGEREQUESTTOKEN_H
#define NSPERSISTENTHISTORYCHANGEREQUESTTOKEN_H

@class NSDate, NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSPersistentHistoryChangeRequestToken : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL delete; // ivar: _delete
@property (readonly, nonatomic) NSUInteger fetchBatchSize; // ivar: _fetchBatchSize
@property (readonly, retain, nonatomic) NSData *fetchData; // ivar: _fetchData
@property (readonly, nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (readonly, nonatomic) NSUInteger fetchOffset; // ivar: _fetchOffset
@property (readonly, nonatomic) NSUInteger percentageOfDB; // ivar: _percentageOfDB
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, retain, nonatomic) NSDictionary *token; // ivar: _token
@property (readonly, nonatomic) BOOL transactionFromToken; // ivar: _transactionFromToken


+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif