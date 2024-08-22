// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSTORESWIFTINVOCATIONRESULT_H
#define REMSTORESWIFTINVOCATIONRESULT_H

@class NSData, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMFetchResultToken.h"

@interface REMStoreSwiftInvocationResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) REMFetchResultToken *latestFetchResultToken; // ivar: _latestFetchResultToken
@property (readonly, nonatomic) NSData *resultData; // ivar: _resultData
@property (readonly, nonatomic) NSDictionary *resultStorages; // ivar: _resultStorages


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResultData:(id)arg0 storages:(id)arg1 latestFetchResultToken:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif